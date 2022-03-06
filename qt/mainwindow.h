#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QActionGroup>
#include <QLabel>
#include <QMessageBox>
#include <QThread>
#include "qt/optionsdialog.h"
#include "qt/guiutil.h"
#include "tron/myaccount.h"
#include "qt/worker/accountinfoworker.h"
#include "qt/worker/addcurrencyworker.h"
#include "qt/worker/transactionbroadcastworker.h"
#include "tron/asset.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void setOptionsModel(OptionsModel *clientModel = nullptr);
private:
    void createActions();
    void createMenus();
    void initGetPaid();
    void loadWallet(MyAccount* account);
    void addCurrency(const Asset& asset);
    void broadcastTransaction(const Transaction* transaction);
protected:
    void closeEvent(QCloseEvent *event) override;

private slots:
    void newWallet();
    void openWallet();
    void options();
    void aboutQt();
    void openOptionsDialogWithTab(OptionsDialog::Tab tab);
    void refreshAccuontInfo(const AccountInfo act);
    void transactionResult(const Result ret);
    void addCurrencyResult(const Result ret,const Asset* asset);
    void copyAddress();
    void onAddCurrency();
    void pay();


private:
    OptionsModel* optionsModel = nullptr;
    Ui::MainWindow *ui;
    QMessageBox* loadingDlg;
    QMenu *fileMenu;
    QMenu *toolsMenu;
    QMenu *formatMenu;
    QMenu *helpMenu;
    QActionGroup *alignmentGroup;
    QAction *newAct;
    QAction *openAct;
    QAction *exitAct;
    QAction *optionsQtAct;
    QAction *aboutAct;
    QAction *aboutQtAct;
    QLabel *infoLabel;
    QLabel* addressBar;
    AccountInfoWorker* accountInfoWorker;
    AddCurrencyWorker* addCurrencyWorker;
    TransactionBroadcastWorker* transactionBroadcastWorker;
    QThread* accountInfoWorkerThread;
    QThread* addCurrencyWorkerThread;
    QThread* transactionBroadcastWorkerThread;
    bool firstLoad=true;
    std::vector<Asset> loadedAssets;
Q_SIGNALS:
    void quitRequested();
    void startAccountInfoWorker();
    void stopAccountInfoWorker();
    void addTrc20Asset(const Account* contract);
    void startBroadcastTransaction(const Transaction* transaction);

};
#endif // MAINWINDOW_H
