#include <qt/tronaddressentryvalidator.h>

TronAddressEntryValidator::TronAddressEntryValidator(QObject *parent) :
    QValidator(parent)
{
}

QValidator::State TronAddressEntryValidator::validate(QString &input, int &pos) const
{
    Q_UNUSED(pos);
    // todo:添加校验逻辑
    return QValidator::Acceptable;
}

TronAddressCheckValidator::TronAddressCheckValidator(QObject *parent) :
    QValidator(parent)
{
}

QValidator::State TronAddressCheckValidator::validate(QString &input, int &pos) const
{
    Q_UNUSED(pos);
    // Validate the passed Bitcoin address
    // todo:添加校验逻辑
    /*if (IsValidDestinationString(input.toStdString())) {
        return QValidator::Acceptable;
    }*/

    return QValidator::Acceptable;
}
