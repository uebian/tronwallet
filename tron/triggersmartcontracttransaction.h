#ifndef TRIGGERSMARTTRANSFERCONTRACTTRANSACTION_H
#define TRIGGERSMARTTRANSFERCONTRACTTRANSACTION_H

#include "transaction.h"
#include "tron/proto/core/contract/balance_contract.pb.h"
#include <cstddef>

#include "account.h"

class TriggerSmartTransferContractTransaction : public Transaction
{
	private:
		protocol::TransferContract tc;

	public:
		TriggerSmartTransferContractTransaction(Account owner, Account to, long long amount);
		~TriggerSmartTransferContractTransaction();
};

#endif
