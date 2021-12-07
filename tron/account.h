#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
#include <string>

class Account
{
public:
    Account(unsigned char* address);
    Account(std::string address);
    static bool convertAndValidateAddress(std::string address,unsigned char* data);
    static std::string calculateAddress(const unsigned char* data);
    std::string getAddress();
    void refreshInformation();

protected:
    void setAddress(std::string address);
private:
    unsigned char address[21];
};

#endif // ACCOUNT_H
