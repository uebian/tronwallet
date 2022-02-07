#include <cstdint>
#include <cstring>
#include <cstdio>
#include <string>

#ifndef UTILS_H
#define UTILS_H

void hex2bytes(unsigned char bytearray[],std::string hex);
std::string bytes2hex(unsigned char *data, int len);
long currentTimeMillis();
bool is_big_endian();
void randomBytes(unsigned char* buf,size_t len);

#endif // UTILS_H
