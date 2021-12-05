#include "account.h"
#include "utils.h"
#include "crypto/base58.h"
#include "crypto/sm3.h"
#include "crypto/sha256.h"
#include <stdexcept>

Account::Account(unsigned char* address)
{
    memcpy(this->address,address,21);
}

Account::Account(std::string address)
{
    if(!Account::convertAndValidateAddress(address,this->address))
    {
        throw std::invalid_argument("The Tron address is invalid");
    }
}
bool Account::convertAndValidateAddress(std::string address,unsigned char* data)
{
    unsigned char buf[25];
    unsigned char hash0[32];
    unsigned char hash1[32];
    Base58Decode(address,buf);
    std::cout<<bytes2hex(buf,25)<<std::endl;
    sha256(buf,21,hash0);
    sha256(hash0,32,hash1);
    std::cout<<bytes2hex(hash1,32)<<std::endl;
    if(hash1[0]==buf[21] && hash1[1]==buf[22] && hash1[2]==buf[23] && hash1[3]==buf[24])
    {
        memcpy(data,buf,21);
        return true;
    }else{
        return false;
    }
}
