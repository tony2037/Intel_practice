#include <stdio.h>
#include <stdint.h>


int64_t readMSR (int64_t ecx) {
    unsigned int hi, lo;
    __asm__ volatile("rdmsr\n\t" : "=a"(lo), "=d"(hi) : "c"(ecx));
    return ((int64_t) hi << 32) | (int64_t) lo;
}
