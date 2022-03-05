#ifndef ADDCURRENCYDIALOG_H
#define ADDCURRENCYDIALOG_H

#include <QDialog>

namespace Ui {
class AddCurrencyDialog;
}

enum AssetType{
    TRC10,
    TRC20,
    Unknown
};

class AddCurrencyDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddCurrencyDialog(QWidget *parent = nullptr);
    ~AddCurrencyDialog();
    AssetType getAssetType();
    std::string getTrc20Address();

private:
    Ui::AddCurrencyDialog *ui;
};

#endif // ADDCURRENCYDIALOG_H
