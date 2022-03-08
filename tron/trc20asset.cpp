#include<iostream>
#include<string>
#include<memory>
#include<cstring>
#include"trc20asset.h"
#include "tron/smartcontractcallbuilder.h"
#include "tron/scvalue/scvalueaccount.h"
#include "utils.h"

Trc20Asset::Trc20Asset(const std::string & asset_name, const std::string & asset_abbreviation, unsigned long long asset_precision, const Account& contract_address) : Asset(asset_name, asset_abbreviation, asset_precision), contract_address(contract_address)
{

}

Trc20Asset::~Trc20Asset()
{
}

AssetType Trc20Asset::getType() const{
    return AssetType::TRC20;
}

unsigned long long Trc20Asset::fetchBalance(const Account& owner, const TronClient *client) const{
    SmartContractCallBuilder builder;
    builder.setFuncSign("balanceOf(address)");
    builder.addStaticArgs(new SCValueAccount(owner));
    unsigned char* t=new unsigned char[builder.getLength()];
    builder.build(t);
    std::vector<std::string> ret=client->callConstantContract(&owner,&contract_address,t,builder.getLength());
    delete[] t;
    unsigned char balanceBuf[32];
    memcpy(balanceBuf,ret[0].c_str(),32);
    if(ret.size()==0)
    {
        return -1;
    }else{
        unsigned long long balance=(unsigned long long)getUint256FromBuffer(balanceBuf);
        return balance;
    }
}

Trc20Asset Trc20Asset::loadTrc20Contract(const Account &contract_address, const TronClient *client){
    const MyAccount* account=client->getAccount();
    SmartContractCallBuilder builder;
    builder.setFuncSign("name()");
    unsigned char* t=new unsigned char[builder.getLength()];
    builder.build(t);
    std::vector<std::string> ret=client->callConstantContract(account,&contract_address,t,builder.getLength());
    delete[] t;
    if(ret.size()==0)
    {
        return Trc20Asset("","",0,contract_address);
    }
    std::string name=parseStringRet((unsigned char*)ret[0].c_str());
    builder.setFuncSign("symbol()");
    t=new unsigned char[builder.getLength()];
    builder.build(t);
    ret=client->callConstantContract(account,&contract_address,t,builder.getLength());
    delete[] t;
    if(ret.size()==0)
    {
        return Trc20Asset("","",0,contract_address);
    }
    std::string symbol=parseStringRet((unsigned char*)ret[0].c_str());
    builder.setFuncSign("decimals()");
    t=new unsigned char[builder.getLength()];
    builder.build(t);
    ret=client->callConstantContract(account,&contract_address,t,builder.getLength());
    delete[] t;
    if(ret.size()==0)
    {
        return Trc20Asset("","",0,contract_address);
    }
    boost::multiprecision::uint256_t decimals=getUint256FromBuffer((unsigned char*)ret[0].c_str());
    return Trc20Asset(name,symbol,(unsigned long long)decimals,contract_address);
}
