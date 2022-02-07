#ifndef TRONCLIENT_H
#define TRONCLIENT_H

#include <memory>
#include <grpcpp/grpcpp.h>
#include <string>
#include "tron/block.h"
#include "myaccount.h"

class TronClient
{
public:
    TronClient(const std::string& target);
    Block GetNowBlock();
    void loadWallet(MyAccount* account);
    void getAccount();
private:
    std::shared_ptr<grpc::Channel> channel;
    MyAccount* account;
};

#endif // TRONCLIENT_H
