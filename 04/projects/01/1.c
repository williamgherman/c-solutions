#include <stdio.h>

int main(void) {

    int n = 0;

    printf("Enter a two-digit number: ");
    scanf("%d", &n);

    printf("The reversal is: %d%d\n", n % 10, n / 10);

    return 0;
}
