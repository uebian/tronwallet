#ifndef TRONCLIENT_H
#define TRONCLIENT_H

#include <memory>
#include <grpcpp/grpcpp.h>
#include <string>
#include "tron/proto/api/api.grpc.pb.h"

class TronClient
{
public:
    TronClient(const std::string& target);
    protocol::BlockExtention GetNowBlock();
private:
    std::shared_ptr<grpc::Channel> channel;
};

extern TronClient* tronClient;

#endif // TRONCLIENT_H
