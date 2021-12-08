#ifndef TRANSFERCONTRACTTRANSACTION_H
#define TRANSFERCONTRACTTRANSACTION_H

#include "transaction.h"
#include "tron/proto/core/contract/balance_contract.pb.h"
#include <cstddef>

#include "account.h"

class TransferContractTransaction : public Transaction
{
private:
    protocol::TransferContract tc;

public:
    TransferContractTransaction(Account owner,Account to,long long amount);
    ~TransferContractTransaction();
};

#endif // TRANSFERCONTRACTTRANSACTION_H
