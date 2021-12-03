#ifndef SM3_H
#define SM3_H

#define SM3_DIGEST_LENGTH	32
#define SM3_BLOCK_SIZE		64

#include <sys/types.h>
#include <stdint.h>
#include <cstring>

class SM3
{
public:
    SM3();
    void Update(unsigned char *msg, size_t  msglen);
    void Final(unsigned char *digest);
    static void Hash(unsigned char *msg, size_t msglen,unsigned char *digest);
private:
    uint32_t digest[8];
    int nblocks;
    unsigned char block[64];
    int num;
};

#endif // SM3_H
