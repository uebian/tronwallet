#include "block.h"
#include "crypto/sm3.h"
#include "crypto/sha256.h"
#include "utils.h"

Block::Block(protocol::BlockExtention* pb_block)
{
    this->pb_block=pb_block->New();
    this->pb_block->CopyFrom(*pb_block);
}

Block::~Block()
{
    delete this->pb_block;
}

void Block::getHash(unsigned char* digest) const
{
    size_t raw_data_length=pb_block->block_header().raw_data().ByteSizeLong();
    unsigned char* rawData=new unsigned char[raw_data_length];
    pb_block->block_header().raw_data().SerializeToArray(rawData,raw_data_length);
    sha256(rawData,raw_data_length,digest);
}

void Block::getID(unsigned char* digest) const
{
    long long height=getNumber();
    unsigned char* heightBytes=(unsigned char*)&height;
    unsigned char heightBytesR[8];
    if(is_big_endian())
    {
        memcpy(heightBytesR,heightBytes,8);
    }else{
        for(int i=0;i<8;i++)
        {
            heightBytesR[i]=heightBytes[7-i];
        }
    }
    getHash(digest);
    memcpy(digest,heightBytesR,8);
}

long long Block::getNumber() const
{
    return pb_block->block_header().raw_data().number();
}
