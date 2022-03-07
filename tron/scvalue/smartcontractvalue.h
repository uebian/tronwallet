#ifndef SMARTCONTRACTVALUE_H
#define SMARTCONTRACTVALUE_H

#include "tron/smartcontracttype.h"

class SmartContractValue
{
public:
    int getLength() const;
    virtual void getData(unsigned char* data) const=0;
private:
    SmartContractType type;
};

#endif // SMARTCONTRACTVALUE_H
