#include "tronclient.h"
#include <stdexcept>
#include <QDebug>
#include <google/protobuf/util/json_util.h>

TronClient::TronClient(const std::string& target)
{
    std::cout<<"Connecting to: "<<target<<std::endl;
    channel=grpc::CreateChannel(target, grpc::InsecureChannelCredentials());
    std::cout<<"Connected to: "<<target<<std::endl;
}

TronClient::~TronClient()
{
}


Block TronClient::GetNowBlock() const
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

const Account* TronClient::getAccount()
{
    return this->account;
}

const AccountInfo TronClient::fetchAccountInfo(const Account* account)
{
    auto stub=protocol::WalletSolidity::NewStub(channel);
    protocol::Account act;
    act.set_address(account->getAddressInBytes(),21);
    protocol::EmptyMessage msg;
    grpc::ClientContext ctx;
    auto status=stub->GetAccount(&ctx,act,&act);
    if(!status.ok())
    {
        throw std::runtime_error(status.error_message());
    }
    AccountInfo info;
    info.address=account->getAddress();
    info.activate=false;
    if(!act.address().empty())
    {
        info.activate=true;
        info.balance=act.balance();
    }
    return info;
}

void TronClient::loadWallet(MyAccount* account)
{
    this->account=account;
    qDebug()<<__FILE__<<"Wallet"<<account->getAddress().c_str()<<"is loaded";
    //Debug
    //this->getAccount();
}
