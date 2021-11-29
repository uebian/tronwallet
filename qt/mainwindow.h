#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QActionGroup>
#include <QLabel>
#include <QMessageBox>
#include "qt/optionsdialog.h"
#include "qt/guiutil.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    void createActions();
    void createMenus();

private slots:
    void newFile();
    void options();
    void aboutQt();
    void openOptionsDialogWithTab(OptionsDialog::Tab tab);


private:
    Ui::MainWindow *ui;
    QMenu *fileMenu;
    QMenu *toolsMenu;
    QMenu *formatMenu;
    QMenu *helpMenu;
    QActionGroup *alignmentGroup;
    QAction *newAct;
    QAction *openAct;
    QAction *saveAct;
    QAction *exitAct;
    QAction *optionsQtAct;
    QAction *aboutAct;
    QAction *aboutQtAct;
    QLabel *infoLabel;
Q_SIGNALS:
    void quitRequested();

};
#endif // MAINWINDOW_H
