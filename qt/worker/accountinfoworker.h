#ifndef ACCOUNTINFOWORKER_H
#define ACCOUNTINFOWORKER_H

#include <QObject>
#include <QTimer>
#include <QThread>
#include <tron/tronclient.h>



class AccountInfoWorker : public QObject
{
    Q_OBJECT
public:
    explicit AccountInfoWorker(TronClient* client,QObject *parent = nullptr);
    void moveToThread(QThread* thread);

signals:
    void resultReady(const AccountInfo act);

public slots:
    void startWorker();
    void stopWorker();
    void fetchInfomation();

private:
    TronClient* client;
    QTimer* timer;
};

#endif // ACCOUNTINFOWORKER_H
