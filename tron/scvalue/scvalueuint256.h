#ifndef SCVALUEUINT256_H
#define SCVALUEUINT256_H

#include "smartcontractvalue.h"

class SCValueUInt256 : public SmartContractValue
{
private:
    unsigned long long x;
public:
    SCValueUInt256(unsigned long long x);
    void getData(unsigned char* data) const;
};

#endif // SCVALUEUINT256_H
