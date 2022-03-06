#ifndef TRONCLIENT_H
#define TRONCLIENT_H

#include <memory>
#include <grpcpp/grpcpp.h>
#include <string>
#include "tron/block.h"
#include "tron/accountinfo.h"
#include "myaccount.h"

struct Result{
    int code;
    std::string message;
};

class TronClient
{
public:
    TronClient(const std::string& target);
    ~TronClient();
    Block GetNowBlock() const;
    void loadWallet(MyAccount* account);
    const MyAccount* getAccount() const;
    const AccountInfo fetchAccountInfo(const Account* act);
    Result broadcastTransaction(const Transaction* transaction) const;
    std::vector<std::string> callConstantContract(const Account* owner,const Account* contract_address,const unsigned char* data,int dataLength) const;
private:
    std::shared_ptr<grpc::Channel> channel;
    MyAccount* account;
};

#endif // TRONCLIENT_H
