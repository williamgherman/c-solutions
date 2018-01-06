#include <stdio.h>

unsigned short swap_bytes(unsigned short i);

int main(void)
{
    unsigned short i;
    printf("Enter a hexadecimal number (up to four digits): ");
    scanf("%hx", &i);
    printf("Number with bytes swapped: %.4hx\n", swap_bytes(i));
    return 0;
}

unsigned short swap_bytes(unsigned short i)
{
    return (i << 8) | (i >> 8);
}
