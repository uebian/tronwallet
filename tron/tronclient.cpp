#include "tronclient.h"
#include <stdexcept>
#include <QDebug>
#include <google/protobuf/util/json_util.h>

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

void TronClient::getAccount()
{
    auto stub=protocol::WalletSolidity::NewStub(channel);
    protocol::Account act;
    act.set_address(this->account->getAddressInBytes(),21);
    protocol::EmptyMessage msg;
    grpc::ClientContext ctx;
    auto status=stub->GetAccount(&ctx,act,&act);
    if(!status.ok())
    {
        throw std::runtime_error(status.error_message());
    }
    //DEBUG
    std::string dout;
    google::protobuf::util::MessageToJsonString(act,&dout);
    std::cout<<dout<<std::endl;
}

void TronClient::loadWallet(MyAccount* account)
{
    this->account=account;
    qDebug()<<__FILE__<<"Wallet"<<account->getAddress().c_str()<<"is loaded";
    //Debug
    this->getAccount();
}
