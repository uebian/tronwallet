#include "addcurrencydialog.h"
#include "ui_addcurrencydialog.h"

AddCurrencyDialog::AddCurrencyDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddCurrencyDialog)
{
    ui->setupUi(this);
}

AddCurrencyDialog::~AddCurrencyDialog()
{
    delete ui;
}
