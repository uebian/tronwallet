#ifndef ACCOUNTINFO_H
#define ACCOUNTINFO_H
#include <string>
struct AccountInfo{
    std::string address;
    bool activate;
    long long balance;
    long long energy_limit;
    long long energy_used;
    long long bandwidth_limit;
    long long bandwidth_used;
};

#endif // ACCOUNTINFO_H
