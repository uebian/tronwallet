#ifndef ADDCURRENCYDIALOG_H
#define ADDCURRENCYDIALOG_H

#include <QDialog>

namespace Ui {
class AddCurrencyDialog;
}

class AddCurrencyDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddCurrencyDialog(QWidget *parent = nullptr);
    ~AddCurrencyDialog();

private:
    Ui::AddCurrencyDialog *ui;
};

#endif // ADDCURRENCYDIALOG_H
