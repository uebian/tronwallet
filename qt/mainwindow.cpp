#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QDebug>
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

}

MainWindow::~MainWindow()
{
    delete ui;
    delete addressBar;
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

void MainWindow::loadWallet(MyAccount* account)
{
    ((TronWalletApplication*)QApplication::instance())->getTronClient()->loadWallet(account);
    ui->centralwidget->show();
    addressBar->setText(account->getAddress().c_str());
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
    Q_EMIT quitRequested();
    QMainWindow::closeEvent(event);
}

void MainWindow::setOptionsModel(OptionsModel *optionsModel)
{
    this->optionsModel = optionsModel;
}

