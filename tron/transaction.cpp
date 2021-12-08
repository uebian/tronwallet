#include "transaction.h"

Transaction::Transaction()
{
    this->raw=new protocol::Transaction_raw();
    pb_transaction.set_allocated_raw_data(raw);
}

void Transaction::getRawData(unsigned char* rawData)
{
    size_t size = getRawDataLength();
    pb_transaction.SerializeToArray(rawData,size);
}


size_t Transaction::getRawDataLength()
{
    return pb_transaction.ByteSizeLong();
}
