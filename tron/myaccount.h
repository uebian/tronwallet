#ifndef MYACCOUNT_H
#define MYACCOUNT_H

#include "account.h"
#include "tron/transaction.h"

class MyAccount : public Account
{
private:
    unsigned char priKey[32];
public:
    MyAccount(const unsigned char* priKey);
    void signTransaction(Transaction& transaction) const;
    static MyAccount* readFromJson(const std::string& path);
    bool saveToJson(const std::string& path) const;
};

#endif // MYACCOUNT_H
