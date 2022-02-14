#include "transaction.h"
#include "utils.h"
#include "crypto/secp256k1wrapper.h"
#include "crypto/sm3.h"
#include <google/protobuf/util/json_util.h>
#include "crypto/sha3.h"
#include "crypto/sha256.h"

Transaction::Transaction()
{
    this->pb_transaction=new protocol::Transaction();
    this->raw=new protocol::Transaction_raw();
    this->raw->set_timestamp(currentTimeMillis());
    //this->raw->set_expiration(tronClient->GetNowBlock().block_header().raw_data().timestamp() + 10 * 60 * 60 * 1000);
    pb_transaction->set_allocated_raw_data(raw);
}

Transaction::~Transaction()
{
    delete this->pb_transaction;
}

void Transaction::getRawData(unsigned char* rawData) const
{
    size_t size = getRawDataLength();
    pb_transaction->SerializeToArray(rawData,size);
}

void Transaction::setData(const unsigned char *data,int length){
    this->raw->set_data(data,length);
}

size_t Transaction::getRawDataLength() const
{
    return pb_transaction->ByteSizeLong();
}

void Transaction::sign(const unsigned char* priKey)
{
    size_t raw_data_length=pb_transaction->raw_data().ByteSizeLong();
    unsigned char* rawData=new unsigned char[raw_data_length];
    pb_transaction->raw_data().SerializeToArray(rawData,raw_data_length);
    //sign
    unsigned char signature[65];
    Secp256k1 ctx;
    ctx.sign(priKey,rawData,raw_data_length,signature);
    pb_transaction->add_signature(signature,65);
}

void Transaction::setBlockInfo(const Block& block)
{
    long long blockHeight = block.getNumber();
    unsigned char blockID[32];
    block.getID(blockID);
    this->raw->set_ref_block_hash(blockID+8,8);
    this->raw->set_ref_block_num(blockHeight);
    this->raw->set_ref_block_bytes(blockID+6,2);
    this->raw->set_expiration(currentTimeMillis()+60*60*1000);
}

const protocol::Transaction* Transaction::getPbTransaction() const
{
    return pb_transaction;
}

Transaction::Transaction(const Transaction& transaction)
{
    this->pb_transaction=new protocol::Transaction(*transaction.getPbTransaction());
    this->raw=new protocol::Transaction_raw(*transaction.raw);
    pb_transaction->set_allocated_raw_data(raw);
}


void Transaction::getTxHash(unsigned char *hash) const{
    size_t raw_data_length=pb_transaction->raw_data().ByteSizeLong();
    unsigned char* rawData=new unsigned char[raw_data_length];
    pb_transaction->raw_data().SerializeToArray(rawData,raw_data_length);
    sha256(rawData,raw_data_length,hash);
}
