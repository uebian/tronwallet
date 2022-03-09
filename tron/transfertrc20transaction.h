#ifndef TRANSFERTRC20TRANSACTION_H
#define TRANSFERTRC20TRANSACTION_H

#include "tron/trc20asset.h"
#include "tron/account.h"
#include "tron/triggersmartcontracttransaction.h"

class TransferTRC20Transaction : public TriggerSmartContractTransaction
{
private:
    unsigned char* data;
public:
    TransferTRC20Transaction(Account owner,Account to, const Trc20Asset& asset,unsigned long long amount);
    ~TransferTRC20Transaction();
};

#endif // TRANSFERTRC20TRANSACTION_H
