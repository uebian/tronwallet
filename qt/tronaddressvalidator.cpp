#include <qt/tronaddressvalidator.h>
#include "tron/account.h"

TronAddressValidator::TronAddressValidator(QObject *parent) :
    QValidator(parent)
{
}


QValidator::State TronAddressValidator::validate(QString &input, int &pos) const
{
    Q_UNUSED(pos);
    // Validate the passed Tron address
    if (input.isEmpty())
        return QValidator::Intermediate;

    try{
        Account t(input.toStdString());
    }catch(std::exception e)
    {
        return QValidator::Invalid;
    }
    return QValidator::Acceptable;
}
