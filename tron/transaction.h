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
    void getRawData(unsigned char* rawData) const;
    size_t getRawDataLength() const;
    void setBlockInfo(const Block& block);
    void sign(unsigned char* priKey);
};

#endif // TRANSACTION_H
