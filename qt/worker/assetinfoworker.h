#ifndef ASSETINFOWORKER_H
#define ASSETINFOWORKER_H

#include <QObject>
#include <QTimer>
#include <QThread>
#include <tron/tronclient.h>

#include <map>
#include "tron/asset.h"

class AssetInfoWorker : public QObject
{
    Q_OBJECT
public:
    explicit AssetInfoWorker(TronClient* client,const std::vector<const Asset*>* assetList,QObject *parent = nullptr);
    void moveToThread(QThread* thread);

signals:
    void resultReady(std::map<const Asset*,unsigned long long> assetInfo);

public slots:
    void startWorker();
    void stopWorker();
    void fetchInfomation();

private:
    TronClient* client;
    QTimer* timer;
    const std::vector<const Asset*>* assetList;
};

#endif // ASSETINFOWORKER_H
