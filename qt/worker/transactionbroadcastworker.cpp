#include "transactionbroadcastworker.h"
#include "utils.h"
#include <QDebug>

TransactionBroadcastWorker::TransactionBroadcastWorker(TronClient* client,QObject *parent):QObject(parent)
{
    this->client=client;
}

void TransactionBroadcastWorker::broadcastTransaction(const Transaction* transaction){
    unsigned char* t=new unsigned char[transaction->getRawDataLength()];
    transaction->getRawData(t);
    qDebug()<<"Sending transaction:"<<bytes2hex(t,transaction->getRawDataLength()).c_str();
    delete[] t;
    TransactionResult ret=client->broadcastTransaction(transaction);
    unsigned char* hash=new unsigned char[32];
    transaction->getTxHash(hash);
    qDebug()<<"Transaction sent:"<<bytes2hex(hash,32).c_str();
    delete[] hash;
    emit transactionResult(ret);

}
