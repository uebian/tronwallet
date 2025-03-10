#ifndef SMARTCONTRACTCALLBUILDER_H
#define SMARTCONTRACTCALLBUILDER_H

#include <string>
#include <vector>
#include "tron/scvalue/smartcontractvalue.h"

class SmartContractCallBuilder
{
public:
    SmartContractCallBuilder();
    int getLength() const;
    void build(unsigned char* data) const;
    void setFuncSign(const std::string& funcSign);
    void addStaticArgs(const SmartContractValue* value);
private:
    std::string funcSign;
    std::vector<const SmartContractValue*> staticArgs;
};

#endif // SMARTCONTRACTCALLBUILDER_H
