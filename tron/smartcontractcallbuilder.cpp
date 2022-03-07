#include "smartcontractcallbuilder.h"
#include "crypto/sha3.h"
#include <cstring>

SmartContractCallBuilder::SmartContractCallBuilder()
{
}

void SmartContractCallBuilder::setFuncSign(const std::string& funcSign)
{
    this->funcSign=funcSign;
}

void SmartContractCallBuilder::build(unsigned char* data) const{
    sha3_context c;
    sha3_Init256(&c);
    sha3_SetFlags(&c, SHA3_FLAGS_KECCAK);
    size_t funcSignLen=this->funcSign.length();
    unsigned char* tFuncSign=new unsigned char[funcSignLen];
    memcpy(tFuncSign,this->funcSign.c_str(),funcSignLen);
    sha3_Update(&c, tFuncSign,funcSignLen);
    unsigned char* hash = (unsigned char*)sha3_Finalize(&c);
    memcpy(data,hash,4);
    int pointer=4;
    for(SmartContractValue value:staticArgs)
    {
        value.getData(data+pointer);
        pointer+=32;
    }
}

int SmartContractCallBuilder::getLength() const{
    return 4+32*staticArgs.size();
}

void SmartContractCallBuilder::addStaticArgs(const SmartContractValue& value){
    staticArgs.push_back(value);
}
