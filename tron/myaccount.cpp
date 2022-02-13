#include "myaccount.h"
#include <QFile>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>
#include <QtGlobal>
#include <QTextStream>
#include <QDebug>
#include <exception>
#include <cstring>
#include "utils.h"
#include "crypto/secp256k1wrapper.h"
#include "crypto/keccak.h"
#include "crypto/sha3.h"

std::string calAddressFromPrivateKey(const unsigned char* priKey)
{
    Secp256k1 ctx;
    unsigned char pubKey[65];
    ctx.getPublicKey(priKey,pubKey);
    sha3_context c;
    sha3_Init256(&c);
    sha3_SetFlags(&c, SHA3_FLAGS_KECCAK);
    sha3_Update(&c, pubKey+1,64);
    unsigned char* hash = (unsigned char*)sha3_Finalize(&c);
    hash[11]=0x41;
    return Account::calculateAddress(hash+11);
}

MyAccount::MyAccount(const unsigned char* priKey):Account(calAddressFromPrivateKey(priKey))
{
    memcpy(this->priKey,priKey,32);
}

bool MyAccount::saveToJson(const std::string& path) const
{
    QJsonDocument document;
    QJsonObject  object;

    object.insert("address", this->getAddress().c_str());
    object.insert("priKey", bytes2hex(this->priKey,32).c_str());
    document.setObject(object);
    QFile fin(path.c_str());
    if(!fin.open(QIODevice::WriteOnly))
    {
        return false;
    }
    fin.write(document.toJson());
    fin.close();
    return true;
}

MyAccount* MyAccount::readFromJson(const std::string& path)
{
    QJsonParseError parseError;
    QFile fin(path.c_str());
    fin.open(QIODevice::ReadOnly);
    QByteArray contentBytes = fin.readAll();
    fin.close();
    QJsonDocument document = QJsonDocument::fromJson(contentBytes, &parseError);
    if( !document.isNull() && (parseError.error == QJsonParseError::NoError))
    {
        QJsonObject object = document.object();
        //解析未发生错误
        QJsonValue address = object.value("address");
        QJsonValue priKeyStr = object.value("priKey");
        unsigned char priKey[32];
        hex2bytes(priKey,priKeyStr.toString().toStdString());
        MyAccount* account=new MyAccount(priKey);
        if(account->getAddress()!=address.toString().toStdString())
        {
            qDebug()<<"Address and private key does not match";
            delete account;
            return nullptr;
        }
        return account;
    }else{
        return nullptr;
    }
}

void MyAccount::signTransaction(Transaction& transaction) const
{
    transaction.sign(this->priKey);
}
