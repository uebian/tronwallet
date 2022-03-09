#ifndef TRIGGERSMARTTRANSFERCONTRACTTRANSACTION_H
#define TRIGGERSMARTTRANSFERCONTRACTTRANSACTION_H

#include <cstddef>
#include "tron/proto/core/contract/smart_contract.pb.h"
#include "account.h"
#include "transaction.h"

class TriggerSmartContractTransaction : public Transaction
{
	private:
        protocol::TriggerSmartContract tsc;

	public:
        TriggerSmartContractTransaction(Account owner,Account contract);
        ~TriggerSmartContractTransaction();
        void setContractData(unsigned char* data,int len);
};

#endif
