#ifndef ADDCURRENCYWORKER_H
#define ADDCURRENCYWORKER_H

#include <QString>
#include <QObject>
#include "tron/tronclient.h"
#include "tron/asset.h"

class AddCurrencyWorker : public QObject
{
    Q_OBJECT
public:
    AddCurrencyWorker(TronClient* client,QObject *parent = nullptr);
signals:
    void addCurrencyResult(const Result result,const Asset* asset);
public slots:
    void addTrc20Asset(const Account* contract);
private:
    TronClient* client;

};

#endif // ADDCURRENCYWORKER_H
