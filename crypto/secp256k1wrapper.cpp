#include "secp256k1wrapper.h"
#include <stdexcept>
#include <cstring>
#include "sha256.h"
#include "sm3.h"
#include <iostream>
#include "utils.h"

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

bool Secp256k1::sign(const unsigned char* priKey,unsigned char* data,int length,unsigned char* dsig){
    unsigned char hash[32];
    sha256(data,length,hash);
    //SM3::Hash(data,length,hash);

    secp256k1_ecdsa_recoverable_signature sig;
    secp256k1_ecdsa_signature nsig;
    if(secp256k1_ecdsa_sign_recoverable(ctx,&sig,hash,priKey,secp256k1_nonce_function_rfc6979,nullptr)==0)
    {
        return false;
    }
    memcpy(nsig.data,sig.data,64);
    secp256k1_ecdsa_signature_serialize_compact(ctx,dsig,&nsig);
    dsig[64]=sig.data[64];
    return true;
}
