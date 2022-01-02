#include <stdio.h>
#include <stdint.h>

int main(){
    int8_t num8 = -128;
    int16_t num16 = -30000;
    int32_t num32 = -2000000000;
    int64_t num64 = -4000000000;

    printf("num8: %d, num16: %d, num32: %d, num64: %lld\n", num8, num16, num32, num64);

    uint8_t unum8 = 255;
    uint16_t unum16 = 60000;
    uint32_t unum32 = 4000000000;
    uint64_t unum64 = 6000000000;

    printf("unum8: %u, unum16: %u, unum32: %u, unum64: %llu\n", unum8, unum16, unum32, unum64);
    return 0;
         }
