#ifndef TRANSACTIONBROADCASTWORKER_H
#define TRANSACTIONBROADCASTWORKER_H

#include "tron/tronclient.h"
#include <QObject>

class TransactionBroadcastWorker : public QObject
{
    Q_OBJECT
public:
    explicit TransactionBroadcastWorker(TronClient* client,QObject *parent = nullptr);
signals:
    void transactionResult(const TransactionResult result);
public slots:
    void broadcastTransaction(const Transaction* transaction);
private:
    TronClient* client;
};

#endif // TRANSACTIONBROADCASTWORKER_H
