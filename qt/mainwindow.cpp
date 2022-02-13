#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QDebug>
#include <QTimer>
#include <QImage>
#include <QProgressDialog>
#include <QClipboard>
#include <functional>
#include "tron/myaccount.h"
#include "tron/smartcontractcallbuilder.h"
#include "tronwalletapplication.h"
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
    accountInfoWorker=new AccountInfoWorker(((TronWalletApplication*)QApplication::instance())->getTronClient());
    accountInfoWorkerThread=new QThread();
    accountInfoWorker->moveToThread(accountInfoWorkerThread);
    //connect(timer, SIGNAL(timeout()), this, SLOT(accountInfoWorker->fetchInfomation()));

    connect(accountInfoWorker, &AccountInfoWorker::resultReady, this, &MainWindow::refreshAccuontInfo);
    connect(this, &MainWindow::startAccountInfoWorker, accountInfoWorker, &AccountInfoWorker::startWorker);
    connect(this, &MainWindow::stopAccountInfoWorker, accountInfoWorker, &AccountInfoWorker::stopWorker);

    connect(ui->btnGetPaidCopyAddr, SIGNAL(clicked()), this, SLOT(copyAddress()));
    accountInfoWorkerThread->start();
    loadingDlg=new QMessageBox();
    loadingDlg->setWindowModality(Qt::WindowModal);
    loadingDlg->setText(tr("Loading..."));
    loadingDlg->setStandardButtons(0);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete addressBar;
    delete accountInfoWorker;
}

void MainWindow::copyAddress(){
    QClipboard *clipboard = QGuiApplication::clipboard();
    clipboard->setText(((TronWalletApplication*)QApplication::instance())->getTronClient()->getAccount()->getAddress().c_str());
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

void MainWindow::refreshAccuontInfo(const AccountInfo act)
{
    qDebug()<<"Account information loaded.";
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
    ui->labelBalance->setText(tr("Balance %1 TRX").arg(((double)act.balance)/1e6));
    ui->pbEnergy->setMaximum(act.energy_limit);
    ui->pbEnergy->setValue(act.energy_limit-act.energy_used);
    ui->pbEnergy->setFormat("%v/%m");
    ui->pbBandwidth->setMaximum(act.bandwidth_limit);
    ui->pbBandwidth->setValue(act.bandwidth_limit-act.bandwidth_used);
    ui->pbBandwidth->setFormat("%v/%m");
    //emit stopAccountInfoWorker();

}

void runTestCode(){
    const MyAccount* account=((TronWalletApplication*)QApplication::instance())->getTronClient()->getAccount();
    Account to("TEERVrdYihJbeqY7KZUskh8qbp3WwfmQvC");
    /*TransferContractTransaction transaction(account,to,1000);
    transaction.setBlockInfo(tronClient->GetNowBlock());
    account.signTransaction(transaction);
    unsigned char* t=new unsigned char[transaction.getRawDataLength()];
    transaction.getRawData(t);
    std::cout<<bytes2hex(t,transaction.getRawDataLength())<<std::endl;*/

    SmartContractCallBuilder builder;
    builder.setFuncSign("baz(uint32,bool)");
    unsigned char* t=new unsigned char[builder.getLength()];
    builder.build(t);
    std::cout<<bytes2hex(t,builder.getLength())<<std::endl;

}

void MainWindow::loadWallet(MyAccount* account)
{
    emit stopAccountInfoWorker();
    firstLoad=true;
    ((TronWalletApplication*)QApplication::instance())->getTronClient()->loadWallet(account);

    addressBar->setText(account->getAddress().c_str());
    //timer->stop();
    //timer->start(3000);
    loadingDlg->show();

    emit startAccountInfoWorker();
    initGetPaid();
    runTestCode();
}

void MainWindow::newWallet()
{
    QString fileName = QFileDialog::getSaveFileName(this,
                                                    tr("Save Wallet"),"", tr("Wallet Files (*.json)"));
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
    accountInfoWorker->stopWorker();
    Q_EMIT quitRequested();
    QMainWindow::closeEvent(event);
}

void MainWindow::setOptionsModel(OptionsModel *optionsModel)
{
    this->optionsModel = optionsModel;
}

