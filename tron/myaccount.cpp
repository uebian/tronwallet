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

MyAccount MyAccount::readFromJson(const std::string& path)
{
    QJsonParseError parseError;
    QFile fin(path.c_str());
    fin.open(QIODevice::ReadOnly);
    QByteArray contentBytes = fin.readAll();
    QJsonDocument document = QJsonDocument::fromJson(contentBytes, &parseError);
    fin.close();
    if( !document.isNull() && (parseError.error == QJsonParseError::NoError))
    {
        QJsonObject object = document.object();
        //解析未发生错误
        QJsonValue address = object.value("address");
        QJsonValue priKeyStr = object.value("priKey");
        unsigned char priKey[32];
        hex2bytes(priKey,priKeyStr.toString().toStdString());
        MyAccount account(priKey);
        if(account.getAddress()!=address.toString().toStdString())
        {
            throw std::invalid_argument("Address and private key does not match");
        }
        return account;
    }else{
        throw std::invalid_argument("Invalid wallet file");
    }
}

void MyAccount::signTransaction(Transaction& transaction)
{
    transaction.sign(this->priKey);
}
