#ifndef BLOCK_H
#define BLOCK_H

#include "tron/proto/api/api.grpc.pb.h"

class Block
{
private:
    protocol::BlockExtention* pb_block;
public:
    Block(protocol::BlockExtention* pb_block);
    ~Block();
    void getHash(unsigned char* digest) const;
    void getID(unsigned char* digest) const;
    long long getNumber() const;
};

#endif // BLOCK_H
