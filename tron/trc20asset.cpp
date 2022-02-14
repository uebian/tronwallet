#include<iostream>
#include<string>
#include<memory>
#include<cstring>
#include"trc20asset.h"
#include "tron/smartcontractcallbuilder.h"
#include "utils.h"

Trc20Asset::Trc20Asset(const std::string & asset_name, const std::string & asset_abbreviation, long long asset_amount, long long asset_precision, const Account& contract_address) : Asset(asset_name, asset_abbreviation, asset_amount, asset_precision), contract_address(contract_address)
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
    int len=ret[0].length();
    unsigned char* retBytes=new unsigned char[len];
    memcpy(retBytes,ret[0].c_str(),len);
    std::cout<<"Contract ret:"<<bytes2hex(retBytes,len)<<std::endl;
    boost::multiprecision::uint256_t offset=getUint256FromBuffer(retBytes);
    boost::multiprecision::uint256_t nameLength=getUint256FromBuffer(retBytes+(unsigned long long)offset);
    char* nameBytes=new char[(unsigned long long)nameLength+1];
    memcpy(nameBytes,retBytes+(unsigned long long)offset+32,(unsigned long long)nameLength);
    nameBytes[(unsigned long long)nameLength]='\0';
    std::string name=nameBytes;
    delete[] retBytes;
    delete[] t;
    delete[] nameBytes;
    return Trc20Asset(name,"",0,0,contract_address);
}
