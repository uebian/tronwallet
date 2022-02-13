#include "utils.h"
#include <chrono>
#include <fcntl.h>
#include <unistd.h>

constexpr char hexmap[] = {'0', '1', '2', '3', '4', '5', '6', '7',
                           '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};

std::string bytes2hex(const unsigned char *data, int len)
{
    std::string s(len * 2, ' ');
    for (int i = 0; i < len; ++i) {
        s[2 * i]     = hexmap[(data[i] & 0xF0) >> 4];
        s[2 * i + 1] = hexmap[data[i] & 0x0F];
    }
    return s;
}

void hex2bytes(unsigned char bytearray[],const std::string& hex){
    int i;
    uint8_t str_len = hex.length();
    const char* str=hex.c_str();
    for (i = 0; i < str_len / 2; i++) {
        sscanf(str + 2*i, "%02x", &bytearray[i]);
    }
}

long currentTimeMillis()
{
    auto time = std::chrono::system_clock::now(); // get the current time

    auto since_epoch = time.time_since_epoch(); // get the duration since epoch

    // I don't know what system_clock returns
    // I think it's uint64_t nanoseconds since epoch
    // Either way this duration_cast will do the right thing
    auto millis = std::chrono::duration_cast<std::chrono::milliseconds>(since_epoch);

    long now = millis.count(); // just like java (new Date()).getTime();
    return now;
}

bool is_big_endian()
{
    union {
        uint32_t i;
        char c[4];
    } bint = {0x01020304};

    return bint.c[0] == 1;
}

void randomBytes(unsigned char* buf,size_t len)
{
    int fd = open("/dev/urandom",O_RDONLY);
    read(fd,buf,len);
    close(fd);
}

std::string dumpMessage(const google::protobuf::Message& msg){
    std::string json;
    google::protobuf::util::MessageToJsonString(msg,&json);
    return json;
}
