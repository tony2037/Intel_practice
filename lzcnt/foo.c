#include <stdio.h>
#include <stdlib.h>
#include <linux/types.h>
#include <inttypes.h>


int main(int argc, char **argv) {
    uint64_t r64 = 0, r_m64 = 0x2000000000000000;
    __asm__ volatile("lzcnt %0, %1" : "=r"(r64), "=r"(r_m64));
    printf("%llu\n", (unsigned long long)r64);
}
