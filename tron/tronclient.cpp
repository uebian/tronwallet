#include "tronclient.h"
#include <stdexcept>

TronClient::TronClient(const std::string& target)
{
    std::cout<<"Connecting to: "<<target<<std::endl;
    channel=grpc::CreateChannel(target, grpc::InsecureChannelCredentials());
}

Block TronClient::GetNowBlock()
{
    protocol::BlockExtention block;
    auto stub=protocol::WalletSolidity::NewStub(channel);
    protocol::EmptyMessage msg;
    grpc::ClientContext ctx;
    auto status=stub->GetNowBlock2(&ctx,msg,&block);
    if(!status.ok())
    {
        throw std::runtime_error(status.error_message());
    }
    Block ret(&block);
    return ret;
}

TronClient* tronClient;
