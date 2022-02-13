#include <cstdint>
#include <cstring>
#include <cstdio>
#include <string>
#include <google/protobuf/util/json_util.h>


#ifndef UTILS_H
#define UTILS_H

void hex2bytes(unsigned char bytearray[],const std::string& hex);
std::string bytes2hex(const unsigned char *data, int len);
long currentTimeMillis();
bool is_big_endian();
void randomBytes(unsigned char* buf,size_t len);
std::string dumpMessage(const google::protobuf::Message& msg);

#endif // UTILS_H
