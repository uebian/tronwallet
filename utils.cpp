#include "utils.h"

constexpr char hexmap[] = {'0', '1', '2', '3', '4', '5', '6', '7',
                           '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};

std::string bytes2hex(unsigned char *data, int len)
{
  std::string s(len * 2, ' ');
  for (int i = 0; i < len; ++i) {
    s[2 * i]     = hexmap[(data[i] & 0xF0) >> 4];
    s[2 * i + 1] = hexmap[data[i] & 0x0F];
  }
  return s;
}

void hex2bytes(unsigned char bytearray[],std::string hex){
    int i;
    uint8_t str_len = hex.length();
    const char* str=hex.c_str();
    for (i = 0; i < str_len / 2; i++) {
        sscanf(str + 2*i, "%02x", &bytearray[i]);
    }
}
