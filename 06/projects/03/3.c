#include <stdio.h>

int main(void) {

    int num, denom, n, m, r;

    printf("Enter a fraction: ");
    scanf("%d /%d", &num, &denom);

    m = num;
    n = denom;

    while (n != 0) {
        r = m % n;
        m = n;
        n = r;
    }

    printf("In lowest terms: %d/%d\n", num / m, denom / m);

    return 0;
}
