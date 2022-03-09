#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QDebug>
#include <QTimer>
#include <QImage>
#include <QProgressDialog>
#include <QClipboard>
#include <QStringList>
#include <functional>
#include "tron/smartcontractcallbuilder.h"
#include "tron/transfercontracttransaction.h"
#include "tron/transfertrc20transaction.h"
#include "tron/trc20asset.h"
#include "tronwalletapplication.h"
#include "qt/tronaddressvalidator.h"
#include "qt/addcurrencydialog.h"
#include "utils.h"
#include <qrencode.h>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->centralwidget->hide();
    createActions();
    createMenus();
    addressBar=new QLabel();
    statusBar()->addWidget(addressBar);
    //timer=new QTimer(this);
    TronClient* client=((TronWalletApplication*)QApplication::instance())->getTronClient();
    accountInfoWorker=new AccountInfoWorker(client);
    assetInfoWorker=new AssetInfoWorker(client,&this->loadedAssets);
    addCurrencyWorker=new AddCurrencyWorker(client);
    transactionBroadcastWorker=new TransactionBroadcastWorker(client);
    accountInfoWorkerThread=new QThread();
    assetInfoWorkerThread=new QThread();
    addCurrencyWorkerThread=new QThread();
    transactionBroadcastWorkerThread=new QThread();
    accountInfoWorker->moveToThread(accountInfoWorkerThread);
    assetInfoWorker->moveToThread(assetInfoWorkerThread);
    addCurrencyWorker->moveToThread(addCurrencyWorkerThread);
    transactionBroadcastWorker->moveToThread(transactionBroadcastWorkerThread);
    //connect(timer, SIGNAL(timeout()), this, SLOT(accountInfoWorker->fetchInfomation()));

    connect(accountInfoWorker, &AccountInfoWorker::resultReady, this, &MainWindow::refreshAccuontInfo);
    connect(assetInfoWorker, &AssetInfoWorker::resultReady, this, &MainWindow::refreshAssetInfo);
    connect(transactionBroadcastWorker, &TransactionBroadcastWorker::transactionResult, this, &MainWindow::transactionResult);
    connect(addCurrencyWorker, &AddCurrencyWorker::addCurrencyResult, this, &MainWindow::addCurrencyResult);
    connect(this, &MainWindow::startAssetInfoWorker, assetInfoWorker, &AssetInfoWorker::startWorker);
    connect(this, &MainWindow::stopAssetInfoWorker, assetInfoWorker, &AssetInfoWorker::stopWorker);
    connect(this, &MainWindow::startAccountInfoWorker, accountInfoWorker, &AccountInfoWorker::startWorker);
    connect(this, &MainWindow::stopAccountInfoWorker, accountInfoWorker, &AccountInfoWorker::stopWorker);
    connect(this,&MainWindow::addTrc20Asset,addCurrencyWorker,&AddCurrencyWorker::addTrc20Asset);
    connect(this, &MainWindow::startBroadcastTransaction, transactionBroadcastWorker, &TransactionBroadcastWorker::broadcastTransaction);

    connect(ui->btnGetPaidCopyAddr, SIGNAL(clicked()), this, SLOT(copyAddress()));
    connect(ui->btnPay, SIGNAL(clicked()), this, SLOT(pay()));
    connect(ui->btnAddCurrency, SIGNAL(clicked()), this, SLOT(onAddCurrency()));
    accountInfoWorkerThread->start();
    assetInfoWorkerThread->start();
    addCurrencyWorkerThread->start();
    transactionBroadcastWorkerThread->start();
    loadingDlg=new QMessageBox();
    loadingDlg->setWindowModality(Qt::WindowModal);
    loadingDlg->setText(tr("Loading..."));
    loadingDlg->setStandardButtons(0);

    ui->editPayAddress->setCheckValidator(new TronAddressValidator(parent));
    ui->comboPayCurrency->addItem("TRX",-1);
    ui->listBalance->insertColumn(0);
    ui->listBalance->insertColumn(1);
    ui->listBalance->insertColumn(2);
    ui->listBalance->insertColumn(3);
    QStringList balanceTableViewHeaders={tr("Asset Type"),tr("Asset Name"),tr("Asset Symbol"),tr("Balance")};
    ui->listBalance->setHorizontalHeaderLabels(balanceTableViewHeaders);
    ui->listBalance->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete addressBar;
    delete accountInfoWorker;
}

void MainWindow::onAddCurrency()
{
    AddCurrencyDialog dialog;
    if(dialog.exec()==QDialog::Accepted)
    {
        emit stopAssetInfoWorker();
        switch(dialog.getAssetType())
        {
        case AssetType::TRC10:
        {
            QMessageBox msgBox;
            msgBox.setText(tr("Trc10 is not supported"));
            msgBox.exec();
            break;
        }
        case AssetType::TRC20:{
            qDebug()<<"Adding currency"<<dialog.getTrc20Address().c_str();
            loadingDlg->show();
            Account* contract=new Account(dialog.getTrc20Address());
            emit addTrc20Asset(contract);
            break;
        }
        }
    }
}

void MainWindow::copyAddress(){
    QClipboard *clipboard = QGuiApplication::clipboard();
    clipboard->setText(((TronWalletApplication*)QApplication::instance())->getTronClient()->getAccount()->getAddress().c_str());
}

void MainWindow::pay(){
    const TronClient* tronClient=((TronWalletApplication*)QApplication::instance())->getTronClient();
    const MyAccount* account=tronClient->getAccount();
    int cid=this->ui->comboPayCurrency->currentIndex()-1;
    if(cid==-1)
    {
        //TRX
        unsigned long long amount=ui->editPayAmount->text().toFloat()*1e6;
        TransferContractTransaction* transaction=new TransferContractTransaction(*account,Account(ui->editPayAddress->text().toStdString()),amount);
        transaction->setBlockInfo(tronClient->GetNowBlock());
        account->signTransaction(*transaction);
        broadcastTransaction(transaction);
    }else{
        //Asset
        const Asset* asset=this->loadedAssets[cid];
        if(const Trc20Asset* v = dynamic_cast<const Trc20Asset*>(asset))
        {
            unsigned long long amount=ui->editPayAmount->text().toFloat()*pow(10,asset->getDecimals());
            TransferTRC20Transaction* transaction=new TransferTRC20Transaction(*account,Account(ui->editPayAddress->text().toStdString()),*v,amount);
            transaction->setBlockInfo(tronClient->GetNowBlock());
            account->signTransaction(*transaction);
            broadcastTransaction(transaction);
        }
    }
}

void MainWindow::initGetPaid()
{
    std::string address=((TronWalletApplication*)QApplication::instance())->getTronClient()->getAccount()->getAddress();
    ui->labelGetPaidAddress->setText(tr("Send coins to %1").arg(address.c_str()));
    QRcode *qr = QRcode_encodeString(address.c_str(), 1, QR_ECLEVEL_L, QR_MODE_8, 0);
    QImage QrCode_Image=QImage(qr->width,qr->width,QImage::Format_RGB888);

    for (int y = 0; y < qr->width; y++) {
        const int yy=y*qr->width;
        for (int x = 0; x < qr->width; x++) {
            const int xx=yy+x;
            if(qr->data[xx]&0x01)
                QrCode_Image.setPixel(x,y,qRgb(0,0,0));
            else
                QrCode_Image.setPixel(x,y,qRgb(255,255,255));
        }
    }

    QrCode_Image=QrCode_Image.scaled(ui->imgGetPaid->width(),ui->imgGetPaid->height(),
                    Qt::KeepAspectRatio);
    ui->imgGetPaid->setPixmap(QPixmap::fromImage(QrCode_Image));
}

void MainWindow::createActions()
{
    newAct = new QAction(tr("Create Wallet..."), this);
    newAct->setShortcuts(QKeySequence::New);
    newAct->setStatusTip(tr("Create a new wallet"));
    connect(newAct, &QAction::triggered, this, &MainWindow::newWallet);
    openAct = new QAction(tr("Open Wallet..."), this);
    openAct->setShortcuts(QKeySequence::New);
    openAct->setStatusTip(tr("Open an exist wallet"));
    connect(openAct, &QAction::triggered, this, &MainWindow::openWallet);
    optionsQtAct = new QAction(tr("&Options..."), this);
    optionsQtAct->setShortcuts(QKeySequence::New);
    optionsQtAct->setStatusTip(tr("Modify configuration options"));
    connect(optionsQtAct, &QAction::triggered, this, &MainWindow::options);
    aboutQtAct = new QAction(tr("About &Qt"), this);
    aboutQtAct->setShortcuts(QKeySequence::New);
    aboutQtAct->setStatusTip(tr("Show information about Qt"));
    connect(aboutQtAct, &QAction::triggered, this, &MainWindow::aboutQt);
}


void MainWindow::createMenus()
{
    fileMenu = menuBar()->addMenu(tr("&File"));
    fileMenu->addAction(newAct);
    fileMenu->addAction(openAct);
    toolsMenu = menuBar()->addMenu(tr("&Tools"));
    toolsMenu->addAction(optionsQtAct);
    /*fileMenu->addAction(saveAct);
    fileMenu->addAction(printAct);
    fileMenu->addSeparator();
    fileMenu->addAction(exitAct);

    editMenu = menuBar()->addMenu(tr("&Edit"));
    editMenu->addAction(undoAct);
    editMenu->addAction(redoAct);
    editMenu->addSeparator();
    editMenu->addAction(cutAct);
    editMenu->addAction(copyAct);
    editMenu->addAction(pasteAct);
    editMenu->addSeparator();*/
    helpMenu = menuBar()->addMenu(tr("&Help"));
    //helpMenu->addAction(aboutAct);
    helpMenu->addAction(aboutQtAct);
}

void MainWindow::transactionResult(const Result act)
{
    loadingDlg->done(0);
    QMessageBox msgBox;
    if(act.code==0)
    {
        msgBox.setText(tr("Transaction sent successfully."));
    }else{
        msgBox.setText(tr("Transaction failed, error code: %1, error message: %2").arg(act.code).arg(act.message.c_str()));
    }
    msgBox.exec();
}

void MainWindow::addCurrencyResult(const Result act,const Asset* asset)
{
    loadingDlg->done(0);
    QMessageBox msgBox;
    if(act.code==0)
    {
        msgBox.setText(tr("TRC20 token %1(%2) added successfully.").arg(asset->getName().c_str()).arg(asset->getSymbol().c_str()));
        addCurrency(asset);
        emit startAssetInfoWorker();
    }else{
        msgBox.setText(tr("Add currency failed, error code: %1, error message: %2").arg(act.code).arg(act.message.c_str()));
    }
    msgBox.exec();
}

void MainWindow::refreshAssetInfo(std::map<const Asset*,unsigned long long> balance){
    int ccnt=ui->listBalance->rowCount();
    for(int i=balance.size();i<ccnt;i++)
    {
        for(int j=0;j<4;j++)
        {
            delete ui->listBalance->item(i,j);
        }
    }
    ui->listBalance->setRowCount(balance.size());
    for(unsigned long i=ccnt;i<balance.size();i++)
    {
        for(int j=0;j<4;j++)
        {
            QTableWidgetItem* item=new QTableWidgetItem();
            ui->listBalance->setItem(i,j,item);
            item->setFlags(item->flags() ^ Qt::ItemIsEditable);
        }

    }
    int i=0;
    /*qDebug()<<"=========";
    for(auto it=balance.begin();it!=balance.end();it++){
        qDebug()<<it->first->getName().c_str();
    }
    qDebug()<<"=========";*/
    for(auto it=balance.begin();it!=balance.end();it++)
    {
        std::string assetTypeStr;
        switch(it->first->getType())
        {
        case AssetType::TRC10:
            assetTypeStr="TRC10";
            break;
        case AssetType::TRC20:
            assetTypeStr="TRC20";
            break;
        default:
            assetTypeStr="Unknown";
            break;
        }
        ui->listBalance->item(i,0)->setText(assetTypeStr.c_str());
        ui->listBalance->item(i,1)->setText(it->first->getName().c_str());
        ui->listBalance->item(i,2)->setText(it->first->getSymbol().c_str());
        ui->listBalance->item(i,3)->setText(QString::number(it->second/(double)pow(10,it->first->getDecimals())));
        i++;
    }
}

void MainWindow::refreshAccuontInfo(const AccountInfo act)
{
    if(firstLoad)
    {
        firstLoad=false;
        loadingDlg->done(0);

        QMessageBox msgBox;
        if(act.activate)
        {
            msgBox.setText(tr("Wallet %1 is loaded.").arg(act.address.c_str()));
        }else{
            msgBox.setText(tr("Wallet %1 is loaded but is not activated on the blockchain, some functions will be disabled.").arg(act.address.c_str()));
            ui->tabWidget->setTabEnabled(0,false);
            ui->tabWidget->setTabEnabled(1,false);
        }
        msgBox.exec();
        ui->centralwidget->show();

    }
    if(act.activate)
    {
        ui->tabWidget->setTabEnabled(0,true);
        ui->tabWidget->setTabEnabled(1,true);
    }
    ui->labelBalance->setText(tr("Balance %1 TRX").arg(((double)act.balance)/1e6));
    ui->pbEnergy->setMaximum(act.energy_limit);
    ui->pbEnergy->setValue(act.energy_limit-act.energy_used);
    ui->pbEnergy->setFormat("%v/%m");
    ui->pbBandwidth->setMaximum(act.bandwidth_limit);
    ui->pbBandwidth->setValue(act.bandwidth_limit-act.bandwidth_used);
    ui->pbBandwidth->setFormat("%v/%m");

}

void runTestCode(){
    /*const TronClient* client=((TronWalletApplication*)QApplication::instance())->getTronClient();
    Account contract("TQKucgWL1cbAtW8vxKbwRgThw3FPmrok2t");
    Trc20Asset asset=Trc20Asset::loadTrc20Contract(contract,client);
    std::cout<<"Asset Name:"<<asset.getName()<<",Asset symbol:"<<asset.getSymbol()<<",Asset decimals:"<<asset.getDecimals()<<std::endl;*/
}

void MainWindow::loadWallet(MyAccount* account)
{
    emit stopAccountInfoWorker();
    emit stopAssetInfoWorker();
    firstLoad=true;
    ((TronWalletApplication*)QApplication::instance())->getTronClient()->loadWallet(account);

    addressBar->setText(account->getAddress().c_str());
    //timer->stop();
    //timer->start(3000);
    loadingDlg->show();

    emit startAccountInfoWorker();
    emit startAssetInfoWorker();
    initGetPaid();
    runTestCode();
}

void MainWindow::addCurrency(const Asset* asset){
    ui->comboPayCurrency->addItem(asset->getSymbol().c_str(),(int)loadedAssets.size());
    loadedAssets.push_back(asset);
}

void MainWindow::newWallet()
{
    QString fileName = QFileDialog::getSaveFileName(this,
                                                    tr("Save Wallet"),"", tr("Wallet Files (*.json)"));
    if(fileName.isNull())
    {
        return;
    }
    unsigned char priKey[32];
    randomBytes(priKey,32);
    MyAccount* account=new MyAccount(priKey);
    qDebug()<<"Generated wallet"<<account->getAddress().c_str();
    if(!account->saveToJson(fileName.toStdString()))
    {
        QMessageBox msgBox;
        msgBox.setText(tr("Failed to write wallet file."));
        msgBox.exec();
    }else{
        loadWallet(account);
    }
}

void MainWindow::openWallet()
{
    QString fileName = QFileDialog::getOpenFileName(this,
                                                    tr("Open Wallet"),"", tr("Wallet Files (*.json)"));
    if(fileName.isNull())
    {
        return;
    }
    MyAccount* account=MyAccount::readFromJson(fileName.toStdString());
    if(account==nullptr)
    {
        QMessageBox msgBox;
        msgBox.setText(tr("Invalid Wallet File."));
        msgBox.exec();
    }else{
        loadWallet(account);
    }
}

void MainWindow::aboutQt()
{
    QMessageBox::aboutQt(this);
}

void MainWindow::openOptionsDialogWithTab(OptionsDialog::Tab tab)
{
    auto dlg = new OptionsDialog(this);
    connect(dlg, &OptionsDialog::quitOnReset, this, &MainWindow::quitRequested);
    dlg->setCurrentTab(tab);
    dlg->setModel(this->optionsModel);
    GUIUtil::ShowModalDialogAndDeleteOnClose(dlg);
}

void MainWindow::options()
{
    MainWindow::openOptionsDialogWithTab(OptionsDialog::TAB_MAIN);
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    emit stopAccountInfoWorker();
    emit stopAssetInfoWorker();
    Q_EMIT quitRequested();
    QMainWindow::closeEvent(event);
}

void MainWindow::setOptionsModel(OptionsModel *optionsModel)
{
    this->optionsModel = optionsModel;
}

void MainWindow::broadcastTransaction(const Transaction* transaction)
{
    loadingDlg->show();
    emit startBroadcastTransaction(transaction);

}
