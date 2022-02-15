#include<iostream>
#include<string>
#include<memory>
#include<cstring>
#include"trc20asset.h"
#include "tron/smartcontractcallbuilder.h"
#include "utils.h"

Trc20Asset::Trc20Asset(const std::string & asset_name, const std::string & asset_abbreviation, unsigned long long asset_precision, const Account& contract_address) : Asset(asset_name, asset_abbreviation, asset_precision), contract_address(contract_address)
{

}

Trc20Asset::~Trc20Asset()
{
}


Trc20Asset Trc20Asset::loadTrc20Contract(const Account &contract_address, const TronClient *client){
    const MyAccount* account=client->getAccount();
    SmartContractCallBuilder builder;
    builder.setFuncSign("name()");
    unsigned char* t=new unsigned char[builder.getLength()];
    builder.build(t);
    std::vector<std::string> ret=client->callConstantContract(account,&contract_address,t,builder.getLength());
    delete[] t;
    std::string name=parseStringRet((unsigned char*)ret[0].c_str());
    builder.setFuncSign("symbol()");
    t=new unsigned char[builder.getLength()];
    builder.build(t);
    ret=client->callConstantContract(account,&contract_address,t,builder.getLength());
    delete[] t;
    std::string symbol=parseStringRet((unsigned char*)ret[0].c_str());
    builder.setFuncSign("decimals()");
    t=new unsigned char[builder.getLength()];
    builder.build(t);
    ret=client->callConstantContract(account,&contract_address,t,builder.getLength());
    delete[] t;
    boost::multiprecision::uint256_t decimals=getUint256FromBuffer((unsigned char*)ret[0].c_str());
    return Trc20Asset(name,symbol,(unsigned long long)decimals,contract_address);
}
