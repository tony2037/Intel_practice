#include <inttypes.h>
#include <stdlib.h>

#include "demo.h"

int64_t begin;

void SIGALRM_handler(int s) {
    int64_t present = cpucycle();
    printf("1 second up\n");
    printf("%lld cycles\n", (long long) (present - begin));
    exit(0);
}

int main (int argc, char **argv) {
    signal(SIGALRM, SIGALRM_handler);
    
    begin = cpucycle();
    alarm(1);

    while (1) {}
}
