#include "accountinfoworker.h"
#include <QDebug>

AccountInfoWorker::AccountInfoWorker(TronClient* client,QObject *parent):QObject(parent)
{
    this->client=client;
    timer=new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(fetchInfomation()),Qt::DirectConnection);
}

void AccountInfoWorker::moveToThread(QThread *thread){
    timer->moveToThread(thread);
    QObject::moveToThread(thread);
}


void AccountInfoWorker::fetchInfomation()
{
    AccountInfo act=client->fetchAccountInfo(client->getAccount());
    emit resultReady(act);
}

void AccountInfoWorker::startWorker()
{
    qDebug()<<"Start to fetch info";
    timer->start(1000);
}

void AccountInfoWorker::stopWorker()
{
    timer->stop();
}
