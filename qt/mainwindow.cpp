#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    createActions();
    createMenus();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::createActions()
{
    newAct = new QAction(tr("&New"), this);
    newAct->setShortcuts(QKeySequence::New);
    newAct->setStatusTip(tr("Create a new file"));
    connect(newAct, &QAction::triggered, this, &MainWindow::newFile);
    optionsQtAct = new QAction(tr("&Options"), this);
    optionsQtAct->setShortcuts(QKeySequence::New);
    optionsQtAct->setStatusTip(tr("About Qt"));
    connect(optionsQtAct, &QAction::triggered, this, &MainWindow::options);
    aboutQtAct = new QAction(tr("&About Qt"), this);
    aboutQtAct->setShortcuts(QKeySequence::New);
    aboutQtAct->setStatusTip(tr("About Qt"));
    connect(aboutQtAct, &QAction::triggered, this, &MainWindow::aboutQt);
}


void MainWindow::createMenus()
{
    fileMenu = menuBar()->addMenu(tr("&File"));
    fileMenu->addAction(newAct);
    toolsMenu = menuBar()->addMenu(tr("&Tools"));
    toolsMenu->addAction(optionsQtAct);
    /*fileMenu->addAction(openAct);
    fileMenu->addAction(saveAct);
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

void MainWindow::newFile()
{
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

