#ifndef ADDCURRENCYDIALOG_H
#define ADDCURRENCYDIALOG_H

#include <QDialog>
#include "tron/asset.h"

namespace Ui {
class AddCurrencyDialog;
}

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
