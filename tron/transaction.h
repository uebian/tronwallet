#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <cstddef>
#include "tron/block.h"

class Transaction
{
private:
    protocol::Transaction* pb_transaction;
protected:
    protocol::Transaction_raw* raw;
public:
    Transaction();
    ~Transaction();
    Transaction(const Transaction& transaction);
    void getRawData(unsigned char* rawData) const;
    size_t getRawDataLength() const;
    void setBlockInfo(const Block& block);
    void setData(const unsigned char* data,int length);
    void sign(const unsigned char* priKey);
    void getTxHash(unsigned char* hash) const;
    const protocol::Transaction* getPbTransaction() const;
};

#endif // TRANSACTION_H
