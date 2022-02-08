#ifndef TRONCLIENT_H
#define TRONCLIENT_H

#include <memory>
#include <grpcpp/grpcpp.h>
#include <string>
#include "tron/block.h"
#include "tron/accountinfo.h"
#include "myaccount.h"

class TronClient
{
public:
    TronClient(const std::string& target);
    ~TronClient();
    Block GetNowBlock() const;
    void loadWallet(MyAccount* account);
    const Account* getAccount();
    const AccountInfo fetchAccountInfo(const Account* act);
private:
    std::shared_ptr<grpc::Channel> channel;
    MyAccount* account;
};

#endif // TRONCLIENT_H
