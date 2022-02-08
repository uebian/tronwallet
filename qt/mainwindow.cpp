#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QDebug>
#include <QTimer>
#include <QProgressDialog>
#include <functional>
#include "tron/myaccount.h"
#include "tronwalletapplication.h"
#include "utils.h"


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
    //emit stopAccountInfoWorker();
    firstLoad=false;
}

void MainWindow::loadWallet(MyAccount* account)
{
    firstLoad=true;
    ((TronWalletApplication*)QApplication::instance())->getTronClient()->loadWallet(account);

    addressBar->setText(account->getAddress().c_str());
    //timer->stop();
    //timer->start(3000);
    loadingDlg->show();

    emit startAccountInfoWorker();
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

