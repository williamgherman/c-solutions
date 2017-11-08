#include <stdio.h>

int main(void) {

    int n = 0;

    printf("Enter a three-digit number: ");
    scanf("%d", &n);

    printf("The reversal is: %d%d%d\n", n % 10, n / 10 % 10, n / 100);

    return 0;
}
