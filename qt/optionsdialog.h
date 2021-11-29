#ifndef OPTIONSDIALOG_H
#define OPTIONSDIALOG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
class QDataWidgetMapper;
QT_END_NAMESPACE

namespace Ui {
class OptionsDialog;
}

class OptionsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit OptionsDialog(QWidget *parent = nullptr);
    ~OptionsDialog();

    enum Tab {
        TAB_MAIN,
        TAB_NETWORK,
    };

    void setCurrentTab(OptionsDialog::Tab tab);

private Q_SLOTS:
    void on_okButton_clicked();
Q_SIGNALS:
    //void proxyIpChecks(QValidatedLineEdit *pUiProxyIp, uint16_t nProxyPort);
    void quitOnReset();

private:
    Ui::OptionsDialog *ui;
    QDataWidgetMapper *mapper;
};

#endif // OPTIONSDIALOG_H
