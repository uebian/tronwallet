
#ifndef SECP256K1WRAPPER_H
#define SECP256K1WRAPPER_H

#include <secp256k1.h>
#include <secp256k1_recovery.h>

class Secp256k1
{
private:
    secp256k1_context* ctx;
public:
    Secp256k1();
    bool getPublicKey(const unsigned char* priKey,unsigned char* pubKey);
    bool sign(const unsigned char* priKey,unsigned char* data,int length,unsigned char* dsig);
};

#endif // SECP256K1WRAPPER_H
