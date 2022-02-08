#include "account.h"
#include "utils.h"
#include "crypto/base58.h"
#include "crypto/sm3.h"
#include "crypto/sha256.h"
#include <stdexcept>
#include <memory>

#include "tron/proto/api/api.grpc.pb.h"
#include "tron/proto/api/api.pb.h"
#include "tron/proto/core/Tron.pb.h"
#include "tron/proto/core/contract/balance_contract.pb.h"
#include <grpcpp/grpcpp.h>


Account::Account(unsigned char* address)
{
    memcpy(this->address,address,21);
}

Account::Account(std::string address)
{
    setAddress(address);
}

void Account::setAddress(std::string address)
{
    if(!Account::convertAndValidateAddress(address,this->address))
    {
        throw std::invalid_argument("The Tron address is invalid");
    }
}

std::string Account::getAddress() const
{
    return Account::calculateAddress(address);
}

std::string Account::calculateAddress(const unsigned char* address)
{
    unsigned char buf[25];
    memcpy(buf,address,21);
    unsigned char hash0[32];
    unsigned char hash1[32];
    sha256(buf,21,hash0);
    sha256(hash0,32,hash1);
    for(int i=0;i<4;i++)
    {
        buf[21+i]=hash1[i];
    }
    std::string addressRet=Base58Encode(buf,25);
    return addressRet;
}

bool Account::convertAndValidateAddress(std::string address,unsigned char* data)
{
    unsigned char buf[25];
    unsigned char hash0[32];
    unsigned char hash1[32];
    Base58Decode(address,buf);
    sha256(buf,21,hash0);
    sha256(hash0,32,hash1);
    if(hash1[0]==buf[21] && hash1[1]==buf[22] && hash1[2]==buf[23] && hash1[3]==buf[24])
    {
        memcpy(data,buf,21);
        return true;
    }else{
        return false;
    }
}

const unsigned char* Account::getAddressInBytes() const
{
    return address;
}
