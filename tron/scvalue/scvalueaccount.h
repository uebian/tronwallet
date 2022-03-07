#ifndef SCVALUEACCOUNT_H
#define SCVALUEACCOUNT_H

#include "smartcontractvalue.h"
#include "tron/account.h"

class SCValueAccount : public SmartContractValue
{
public:
    SCValueAccount(const Account& account);
    void getData(unsigned char* data) const;
private:
    Account act;
};

#endif // SCVALUEACCOUNT_H
