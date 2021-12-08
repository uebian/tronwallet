#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <cstddef>
#include "tron/proto/core/Tron.pb.h"

class Transaction
{
private:
    protocol::Transaction pb_transaction;
protected:
    protocol::Transaction_raw* raw;
public:
    Transaction();
    void getRawData(unsigned char* rawData);
    size_t getRawDataLength();
};

#endif // TRANSACTION_H
