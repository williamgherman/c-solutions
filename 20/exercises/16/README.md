### Exercise 20.16

Starting with the 386 processor, x86 CPUs have 32-bit registers named EAX, EBX,
ECX and EDX. The second half (the least significant bits) of these registers is
the same as AX, BX, CX and DX, respectively. Modify the `regs` union so that
modifying EAX changed AX and modifying AX changes the second half of EAX (The
other new registers will work in a similar fashion). You'll need to add some
"dummy" members to the `word` and `byte` structures, corresponsing to the other
half of EAX, EBX, ECX and EDX. Declare the type of the new registers to by
`DWORD` (double word), which should be defined as `unsigned long`. Don't forget
that the x86 architecture is little-endian.

### Solution

```c
typedef unsigned char BYTE
typedef unsigned short WORD
typedef unsigned int DWORD /* int is 32-bit on my machine */

union {
    struct {
        DWORD eax, ebx, ecx, edx;
    } dword;
    struct {
        WORD axl, axh, bxl, bxh, cxl, cxh, dxl, dxh;
    } word;
    struct {
        BYTE axll, axlh, axhl, axhh;
        BYTE bxll, bxlh, bxhl, bxhh;
        BYTE cxll, cxlh, cxhl, cxhh;
        BYTE dxll, dxlh, dxhl, dxhh;
    } byte;
} regs;
```
