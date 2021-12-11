#ifndef TRONCLIENT_H
#define TRONCLIENT_H

#include <memory>
#include <grpcpp/grpcpp.h>
#include <string>
#include "tron/block.h"

class TronClient
{
public:
    TronClient(const std::string& target);
    Block GetNowBlock();
private:
    std::shared_ptr<grpc::Channel> channel;
};

extern TronClient* tronClient;

#endif // TRONCLIENT_H
