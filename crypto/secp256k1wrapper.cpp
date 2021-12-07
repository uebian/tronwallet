#include "secp256k1wrapper.h"
#include <stdexcept>

Secp256k1::Secp256k1()
{
    ctx=secp256k1_context_create(SECP256K1_CONTEXT_SIGN);
    if(!secp256k1_context_randomize(ctx,nullptr))
    {
        throw std::runtime_error("Failed to randomize secp256k1 context");
    }
}

bool Secp256k1::getPublicKey(const unsigned char* priKey,unsigned char* pubKey){
    secp256k1_pubkey tpubkey;
    if(!secp256k1_ec_pubkey_create(ctx,&tpubkey,priKey))
    {
        return false;
    }
    unsigned long len=65;
    if(!secp256k1_ec_pubkey_serialize(ctx,pubKey,&len,&tpubkey,SECP256K1_EC_UNCOMPRESSED))
    {
        return false;
    }
    return true;
}
