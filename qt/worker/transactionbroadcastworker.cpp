#include "transactionbroadcastworker.h"
#include "utils.h"

TransactionBroadcastWorker::TransactionBroadcastWorker(TronClient* client,QObject *parent):QObject(parent)
{
    this->client=client;
}

void TransactionBroadcastWorker::broadcastTransaction(const Transaction* transaction){
    unsigned char* t=new unsigned char[transaction->getRawDataLength()];
    transaction->getRawData(t);
    std::cout<<"Sending transaction:"<<bytes2hex(t,transaction->getRawDataLength())<<std::endl;
    TransactionResult ret=client->broadcastTransaction(transaction);
    emit transactionResult(ret);

}
