#include "scvalueaccount.h"
#include <cstring>

SCValueAccount::SCValueAccount(const Account& act):act(act)
{
}

void SCValueAccount::getData(unsigned char* data) const{
    memset(data,0,32);
    memcpy(data+11,this->act.getAddressInBytes(),21);
}
