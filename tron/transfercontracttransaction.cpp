#include "transfercontracttransaction.h"

TransferContractTransaction::TransferContractTransaction(Account owner,Account to,long long amount)
{
    tc.set_owner_address(owner.getAddressInBytes(),21);
    tc.set_to_address(to.getAddressInBytes(),21);
    tc.set_amount(amount);
    protocol::Transaction_Contract* otc=raw->add_contract();
    google::protobuf::Any* any=new google::protobuf::Any();
    any->PackFrom(tc);
    otc->set_type(protocol::Transaction_Contract_ContractType_TransferContract);
    otc->set_allocated_parameter(any);
}

TransferContractTransaction::~TransferContractTransaction()
{
}

