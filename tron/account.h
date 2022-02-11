#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
#include <string>

class Account
{
public:
    Account(unsigned char* address);
    Account(const std::string& address);
    static bool convertAndValidateAddress(const std::string& address,unsigned char* data);
    static std::string calculateAddress(const unsigned char* data);
    std::string getAddress() const;
    const unsigned char* getAddressInBytes() const;

protected:
    void setAddress(const std::string& address);
private:
    unsigned char address[21];
};

#endif // ACCOUNT_H
