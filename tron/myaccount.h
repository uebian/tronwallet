#ifndef MYACCOUNT_H
#define MYACCOUNT_H

#include "account.h"

class MyAccount : public Account
{
private:
    unsigned char priKey[32];
public:
    MyAccount(const unsigned char* priKey);
    static MyAccount readFromJson(const std::string& path);
};

#endif // MYACCOUNT_H
