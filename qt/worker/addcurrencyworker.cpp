#include "addcurrencyworker.h"
#include "tron/trc20asset.h"

AddCurrencyWorker::AddCurrencyWorker(TronClient* client,QObject *parent):QObject(parent)
{
    this->client=client;
}

void AddCurrencyWorker::addTrc20Asset(const Account* contract){
    Result ret;
    ret.code=0;
    Asset* asset=new Asset(Trc20Asset::loadTrc20Contract(*contract,client));
    delete contract;
    emit addCurrencyResult(ret,asset);

}
