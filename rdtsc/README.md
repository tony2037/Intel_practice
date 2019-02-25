RDTSC
---
[https://c9x.me/x86/html/file_module_x86_id_278.html](https://c9x.me/x86/html/file_module_x86_id_278.html)
:::info
Loads the current value of the processor's time-stamp counter into the EDX:EAX registers. The time-stamp counter is contained in a 64-bit MSR. The high-order 32 bits of the MSR are loaded into the EDX register, and the low-order 32 bits are loaded into the EAX register.
:::
* Implement: C
:::info
Environment: `4.15.0-45-generic` `#48~16.04.1-Ubuntu`
```clike=
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
```
:::
