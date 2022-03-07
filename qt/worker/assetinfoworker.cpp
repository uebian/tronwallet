#include "assetinfoworker.h"
#include <QDebug>
#include "tron/trc20asset.h"

AssetInfoWorker::AssetInfoWorker(TronClient* client,const std::vector<const Asset*>* assetList,QObject *parent):QObject(parent)
{
    this->client=client;
    this->assetList=assetList;
    timer=new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(fetchInfomation()),Qt::DirectConnection);
}

void AssetInfoWorker::moveToThread(QThread *thread){
    timer->moveToThread(thread);
    QObject::moveToThread(thread);
}


void AssetInfoWorker::fetchInfomation()
{
    std::map<const Asset*,unsigned long long> ret;
    for(const Asset* asset:*this->assetList)
    {
        if(const Trc20Asset* v = dynamic_cast<const Trc20Asset*>(asset))
        {
            ret.insert(std::pair<const Asset*,unsigned long long>(asset,v->fetchBalance(*this->client->getAccount(),this->client)));
        }
    }
    emit resultReady(ret);
}

void AssetInfoWorker::startWorker()
{
    qDebug()<<"Start to fetch info";
    timer->start(5000);
}

void AssetInfoWorker::stopWorker()
{
    timer->stop();
}
