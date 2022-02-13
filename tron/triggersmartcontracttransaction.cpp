#include "triggersmartcontracttransaction.h"

TriggerSmartContractTransaction::TriggerSmartContractTransaction(Account owner, unsigned char* data, int len)
{
    tsc.set_owner_address(owner.getAddressInBytes(),21);
    tsc.set_data(data,len);
    protocol::Transaction_Contract* otc=raw->add_contract();
    google::protobuf::Any* any=new google::protobuf::Any();
    any->PackFrom(tsc);
    otc->set_type(protocol::Transaction_Contract_ContractType_TriggerSmartContract);
    otc->set_allocated_parameter(any);
}

TriggerSmartContractTransaction::~TriggerSmartContractTransaction()
{
}
