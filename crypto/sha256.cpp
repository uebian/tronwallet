#include "sha256.h"
#include <openssl/sha.h>

void sha256(const unsigned char* str,int length, unsigned char* sha256dst)
{
    SHA256_CTX sha256;
    SHA256_Init(&sha256);
    SHA256_Update(&sha256, str, length);
    SHA256_Final(sha256dst, &sha256);
}
