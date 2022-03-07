#include "addcurrencyworker.h"
#include "tron/trc20asset.h"

AddCurrencyWorker::AddCurrencyWorker(TronClient* client,QObject *parent):QObject(parent)
{
    this->client=client;
}

void AddCurrencyWorker::addTrc20Asset(const Account* contract){
    Result ret;

    Trc20Asset* asset=new Trc20Asset(Trc20Asset::loadTrc20Contract(*contract,client));
    delete contract;
    if(asset->getName()=="")
    {
        delete asset;
        asset=nullptr;
        ret.code=1;
        ret.message="Invalid TRC20 contract";
    }else{
        ret.code=0;
    }
    emit addCurrencyResult(ret,asset);
}
