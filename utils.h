#include <cstdint>
#include <cstring>
#include <cstdio>
#include <string>

#ifndef UTILS_H
#define UTILS_H

void hex2bytes(unsigned char bytearray[],std::string hex);
std::string bytes2hex(unsigned char *data, int len);

#endif // UTILS_H
