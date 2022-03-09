#include "transfertrc20transaction.h"
#include "tron/smartcontractcallbuilder.h"
#include "tron/scvalue/scvalueaccount.h"
#include "tron/scvalue/scvalueuint256.h"

TransferTRC20Transaction::TransferTRC20Transaction(Account owner,Account to, const Trc20Asset& asset,unsigned long long amount):TriggerSmartContractTransaction(owner,asset.getContract())
{
    SmartContractCallBuilder builder;
    builder.setFuncSign("transfer(address,uint256)");
    builder.addStaticArgs(new SCValueAccount(to));
    builder.addStaticArgs(new SCValueUInt256(amount));
    int len=builder.getLength();
    data=new unsigned char[len];
    builder.build(data);
    this->setContractData(data,len);
}

TransferTRC20Transaction::~TransferTRC20Transaction(){
    delete[] data;
}
