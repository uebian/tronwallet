#include <vector>
#include <random>
#include <string>
#include <algorithm>
#include <iomanip>
#include <iostream>


#ifndef BASE58_H
#define BASE58_H

void Base58Decode(const std::string& data,unsigned char* dst);
std::string Base58Encode(const unsigned char* data,size_t length);


#endif // BASE58_H
