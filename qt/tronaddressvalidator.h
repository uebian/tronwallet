#ifndef TRONADDRESSVALIDATOR_H
#define TRONADDRESSVALIDATOR_H

#include <QValidator>

/** Tron address widget validator, checks for a valid tron address.
 */
class TronAddressValidator : public QValidator
{
    Q_OBJECT

public:
    explicit TronAddressValidator(QObject *parent);

    State validate(QString &input, int &pos) const override;
};

#endif // TRONADDRESSVALIDATOR_H
