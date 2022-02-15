#include <cstdint>
#include <cstring>
#include <cstdio>
#include <string>
#include <google/protobuf/util/json_util.h>
#include <boost/multiprecision/cpp_int.hpp>



#ifndef UTILS_H
#define UTILS_H

void hex2bytes(unsigned char bytearray[],const std::string& hex);
std::string bytes2hex(const unsigned char *data, int len);
long currentTimeMillis();
bool is_big_endian();
void randomBytes(unsigned char* buf,size_t len);
std::string dumpMessage(const google::protobuf::Message& msg);
boost::multiprecision::uint256_t getUint256FromBuffer(const unsigned char* buf);
const std::string parseStringRet(const unsigned char* buf,unsigned long long argOffset=0);

#endif // UTILS_H
