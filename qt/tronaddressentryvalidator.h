#ifndef TRONADDRESSVALIDATOR_H
#define TRONADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class TronAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit TronAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const override;
};

/** Bitcoin address widget validator, checks for a valid bitcoin address.
 */
class TronAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit TronAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const override;
};

#endif // TRONADDRESSVALIDATOR_H
