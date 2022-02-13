#ifndef SMARTCONTRACTVALUE_H
#define SMARTCONTRACTVALUE_H

#include "tron/smartcontracttype.h"

class SmartContractValue
{
public:
    SmartContractValue();
    int getLength() const;
    void getData(unsigned char* data) const;
private:
    SmartContractType type;
};

#endif // SMARTCONTRACTVALUE_H
