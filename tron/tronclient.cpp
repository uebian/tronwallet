#include "tronclient.h"
#include "tron/proto/api/api.grpc.pb.h"

TronClient::TronClient()
{

}

protocol::Block TronClient::GetNowBlock()
{
    protocol::Block block;
    auto stub=protocol::Wallet::NewStub(channel);
    protocol::EmptyMessage msg;
    grpc::ClientContext ctx;
    stub->GetNowBlock(&ctx,msg,&block);
    return block;
}
