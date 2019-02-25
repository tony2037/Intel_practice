RDMSR
---
[https://www.felixcloutier.com/x86/rdmsr](https://www.felixcloutier.com/x86/rdmsr)
:::info
Reads the contents of a 64-bit model specific register (MSR) specified in the ECX register into registers EDX:EAX. (On processors that support the Intel 64 architecture, the high-order 32 bits of RCX are ignored.) The EDX register is loaded with the high-order 32 bits of the MSR and the EAX register is loaded with the low-order 32 bits. (On processors that support the Intel 64 architecture, the high-order 32 bits of each of RAX and RDX are cleared.) If fewer than 64 bits are implemented in the MSR being read, the values returned to EDX:EAX in unimplemented bit locations are undefined.
:::

:::danger
$\because$ This instruction requires ==**ring 0**== to execute.
the first experience ends up with failure: `Segmentation fault (core dumped)`.

Directly execute the following code is not gonna work out.
```clike=
#include <stdio.h>
#include <stdint.h>


int64_t readMSR (int64_t ecx) {
    unsigned int hi, lo;
    __asm__ volatile("rdmsr\n\t" : "=a"(lo), "=d"(hi) : "c"(ecx));
    return ((int64_t) hi << 32) | (int64_t) lo;
}
```
:::
