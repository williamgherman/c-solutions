#include <stdio.h>

int main(void) {
    int beg, mid, end;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf(" (%d ) %d- %d", &beg, &mid, &end);
    printf("You entered %.3d.%3d.%.4d\n", beg, mid, end);

    return 0;
}
