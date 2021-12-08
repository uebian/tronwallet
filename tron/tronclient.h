#ifndef TRONCLIENT_H
#define TRONCLIENT_H

#include <memory>
#include <grpcpp/grpcpp.h>
#include "tron/proto/core/Tron.pb.h"

class TronClient
{
public:
    TronClient();
    protocol::Block GetNowBlock();
private:
    std::shared_ptr<grpc::Channel> channel;
};

#endif // TRONCLIENT_H
