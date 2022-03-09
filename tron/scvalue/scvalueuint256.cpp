#include "scvalueuint256.h"
#include <boost/multiprecision/cpp_int.hpp>
#include "utils.h"

SCValueUInt256::SCValueUInt256(unsigned long long x)
{
    this->x=x;
}

void SCValueUInt256::getData(unsigned char* data) const
{
    boost::multiprecision::uint256_t x=this->x;
    memcpy(data, &x, 32);
    if(!is_big_endian())
    {
        std::reverse(data, data+32);
    }
}
