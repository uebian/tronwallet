#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QActionGroup>
#include <QLabel>
#include <QMessageBox>
#include "qt/optionsdialog.h"
#include "qt/guiutil.h"
#include "tron/myaccount.h"

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
    void loadWallet(MyAccount* account);
protected:
    void closeEvent(QCloseEvent *event) override;

private slots:
    void newWallet();
    void openWallet();
    void options();
    void aboutQt();
    void openOptionsDialogWithTab(OptionsDialog::Tab tab);


private:
    OptionsModel* optionsModel = nullptr;
    Ui::MainWindow *ui;
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
Q_SIGNALS:
    void quitRequested();

};
#endif // MAINWINDOW_H
