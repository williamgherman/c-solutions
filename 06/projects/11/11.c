#include <stdio.h>

int main(void) {

    int i, n, denom;
    float e;

    printf("Enter integer n: ");
    scanf("%d", &n);

    for (i = 1, denom = 1, e = 1.0f; i <= n; i++) {
        e += 1.0f / (denom *= i);
    }
    printf("Approximation of e: %f\n", e);

    return 0;
}
