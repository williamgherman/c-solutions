#include <stdio.h>

int main(void) {

    int n = 0;

    
    printf("Enter number: ");
    scanf("%d", &n);
    int b = 1;
    
    while (b * b++ <= n) if (!(b * b % 2)) printf("%d\n",b * b);

    return 0;
}
