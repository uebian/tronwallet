#include "sm3.h"


#define ROTATELEFT(X,n)  (((X)<<(n)) | ((X)>>(32-(n))))

#define P0(x) ((x) ^  ROTATELEFT((x),9)  ^ ROTATELEFT((x),17))
#define P1(x) ((x) ^  ROTATELEFT((x),15) ^ ROTATELEFT((x),23))

#define FF0(x,y,z) ( (x) ^ (y) ^ (z))
#define FF1(x,y,z) (((x) & (y)) | ( (x) & (z)) | ( (y) & (z)))

#define GG0(x,y,z) ( (x) ^ (y) ^ (z))
#define GG1(x,y,z) (((x) & (y)) | ( (~(x)) & (z)) )

#define cpu_to_be32(v) (((v)>>24) | (((v)>>8)&0xff00) | (((v)<<8)&0xff0000) | ((v)<<24))

void sm3_compress(uint32_t digest[8], const unsigned char block[64])
{
    int j;
    uint32_t W[68], W1[64];
    const uint32_t *pblock = (const uint32_t *)block;

    uint32_t A = digest[0];
    uint32_t B = digest[1];
    uint32_t C = digest[2];
    uint32_t D = digest[3];
    uint32_t E = digest[4];
    uint32_t F = digest[5];
    uint32_t G = digest[6];
    uint32_t H = digest[7];
    uint32_t SS1,SS2,TT1,TT2,T[64];

    for (j = 0; j < 16; j++) {
        W[j] = cpu_to_be32(pblock[j]);
    }
    for (j = 16; j < 68; j++) {
        W[j] = P1( W[j-16] ^ W[j-9] ^ ROTATELEFT(W[j-3],15)) ^ ROTATELEFT(W[j - 13],7 ) ^ W[j-6];;
    }
    for( j = 0; j < 64; j++) {
        W1[j] = W[j] ^ W[j+4];
    }

    for(j =0; j < 16; j++) {

        T[j] = 0x79CC4519;
        SS1 = ROTATELEFT((ROTATELEFT(A,12) + E + ROTATELEFT(T[j],j)), 7);
        SS2 = SS1 ^ ROTATELEFT(A,12);
        TT1 = FF0(A,B,C) + D + SS2 + W1[j];
        TT2 = GG0(E,F,G) + H + SS1 + W[j];
        D = C;
        C = ROTATELEFT(B,9);
        B = A;
        A = TT1;
        H = G;
        G = ROTATELEFT(F,19);
        F = E;
        E = P0(TT2);
    }

    for(j =16; j < 64; j++) {

        T[j] = 0x7A879D8A;
        SS1 = ROTATELEFT((ROTATELEFT(A,12) + E + ROTATELEFT(T[j],j)), 7);
        SS2 = SS1 ^ ROTATELEFT(A,12);
        TT1 = FF1(A,B,C) + D + SS2 + W1[j];
        TT2 = GG1(E,F,G) + H + SS1 + W[j];
        D = C;
        C = ROTATELEFT(B,9);
        B = A;
        A = TT1;
        H = G;
        G = ROTATELEFT(F,19);
        F = E;
        E = P0(TT2);
    }

    digest[0] ^= A;
    digest[1] ^= B;
    digest[2] ^= C;
    digest[3] ^= D;
    digest[4] ^= E;
    digest[5] ^= F;
    digest[6] ^= G;
    digest[7] ^= H;
}


SM3::SM3()
{
    this->digest[0] = 0x7380166F;
    this->digest[1] = 0x4914B2B9;
    this->digest[2] = 0x172442D7;
    this->digest[3] = 0xDA8A0600;
    this->digest[4] = 0xA96F30BC;
    this->digest[5] = 0x163138AA;
    this->digest[6] = 0xE38DEE4D;
    this->digest[7] = 0xB0FB0E4E;

    this->nblocks = 0;
    this->num = 0;

}

void SM3::Update(unsigned char *data, size_t data_len){
    if (this->num) {
        unsigned int left = SM3_BLOCK_SIZE - this->num;
        if (data_len < left) {
            memcpy(this->block + this->num, this, data_len);
            this->num += data_len;
            return;
        } else {
            memcpy(this->block + this->num, data, left);
            sm3_compress(this->digest, this->block);
            this->nblocks++;
            data += left;
            data_len -= left;
        }
    }
    while (data_len >= SM3_BLOCK_SIZE) {
        sm3_compress(this->digest, data);
        this->nblocks++;
        data += SM3_BLOCK_SIZE;
        data_len -= SM3_BLOCK_SIZE;
    }
    this->num = data_len;
    if (data_len) {
        memcpy(this->block, data, data_len);
    }
}

void SM3::Final(unsigned char *digest)
{
    int i;
    uint32_t *pdigest = (uint32_t *)digest;
    uint32_t *count = (uint32_t *)(this->block + SM3_BLOCK_SIZE - 8);

    this->block[this->num] = 0x80;

    if (this->num + 9 <= SM3_BLOCK_SIZE) {
        memset(this->block + this->num + 1, 0, SM3_BLOCK_SIZE - this->num - 9);
    } else {
        memset(this->block + this->num + 1, 0, SM3_BLOCK_SIZE - this->num - 1);
        sm3_compress(this->digest, this->block);
        memset(this->block, 0, SM3_BLOCK_SIZE - 8);
    }

    count[0] = cpu_to_be32((this->nblocks) >> 23);
    count[1] = cpu_to_be32((this->nblocks << 9) + (this->num << 3));

    sm3_compress(this->digest, this->block);
    for (i = 0; i < sizeof(this->digest)/sizeof(this->digest[0]); i++) {
        pdigest[i] = cpu_to_be32(this->digest[i]);
    }

}

void SM3::Hash(unsigned char *msg, size_t msglen,unsigned char *digest)
{
    SM3 ctx;

    ctx.Update(msg, msglen);
    ctx.Final(digest);
}
