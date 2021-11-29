#include "optionsdialog.h"
#include "ui_optionsdialog.h"
#include <QDataWidgetMapper>

OptionsDialog::OptionsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OptionsDialog)
{
    ui->setupUi(this);
    mapper = new QDataWidgetMapper(this);
    mapper->setSubmitPolicy(QDataWidgetMapper::ManualSubmit);
    mapper->setOrientation(Qt::Vertical);
}

OptionsDialog::~OptionsDialog()
{
    delete ui;
}

void OptionsDialog::setCurrentTab(OptionsDialog::Tab tab)
{
    QWidget *tab_widget = nullptr;
    if (tab == OptionsDialog::Tab::TAB_NETWORK) tab_widget = ui->tabNetwork;
    if (tab == OptionsDialog::Tab::TAB_MAIN) tab_widget = ui->tabMain;
    if (tab_widget && ui->tabWidget->currentWidget() != tab_widget) {
        ui->tabWidget->setCurrentWidget(tab_widget);
    }
}

void OptionsDialog::on_okButton_clicked()
{
    mapper->submit();
    accept();
}
