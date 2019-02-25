#include <stdio.h>
#include <stdint.h>


int64_t cpucycle (void) {
    unsigned int hi, lo;

    __asm__ volatile("rdtsc\n\t" : "=a"(lo), "=d"(hi));
    int64_t result = ((int64_t) lo | (((int64_t) hi) << 32));
    return result;
}

int main (int argc, char **argv) {
    cpucycle();
}
