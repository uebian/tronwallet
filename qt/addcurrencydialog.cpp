#include "addcurrencydialog.h"
#include "ui_addcurrencydialog.h"
#include "qt/tronaddressvalidator.h"

AddCurrencyDialog::AddCurrencyDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddCurrencyDialog)
{
    ui->setupUi(this);
    ui->editTrc20Address->setCheckValidator(new TronAddressValidator(parent));
}
AssetType AddCurrencyDialog::getAssetType(){
    switch(ui->tabWidget->currentIndex()){
    case 0:
        return AssetType::TRC10;
    case 1:
        return AssetType::TRC20;
    }
}

AddCurrencyDialog::~AddCurrencyDialog()
{
    delete ui;
}

std::string AddCurrencyDialog::getTrc20Address(){
    return ui->editTrc20Address->text().toStdString();
}
