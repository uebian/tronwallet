#include "triggersmartcontracttransaction.h"

TriggerSmartContractTransaction::TriggerSmartContractTransaction(Account owner,Account contract)
{
    tsc.set_owner_address(owner.getAddressInBytes(),21);
    tsc.set_contract_address(contract.getAddressInBytes(),21);
    protocol::Transaction_Contract* otc=raw->add_contract();
    google::protobuf::Any* any=new google::protobuf::Any();
    any->PackFrom(tsc);
    otc->set_type(protocol::Transaction_Contract_ContractType_TriggerSmartContract);
    otc->set_allocated_parameter(any);
    this->raw->set_fee_limit(10000*pow(10,6));
}

void TriggerSmartContractTransaction::setContractData(unsigned char* data,int len)
{
    tsc.set_data(data,len);
    raw->clear_contract();
    protocol::Transaction_Contract* otc=raw->add_contract();
    google::protobuf::Any* any=new google::protobuf::Any();
    any->PackFrom(tsc);
    otc->set_type(protocol::Transaction_Contract_ContractType_TriggerSmartContract);
    otc->set_allocated_parameter(any);
}

TriggerSmartContractTransaction::~TriggerSmartContractTransaction()
{
}
