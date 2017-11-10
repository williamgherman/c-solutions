#include <stdio.h>

int main(void) {

    int i, denom;
    float e, epsilon, term;

    printf("Enter epsilon: ");
    scanf("%f", &epsilon);

    for (i = 1, denom = 1, e = 1.0f, term = 1.0f; term > epsilon; i++) {
        term = (1.0f / (denom *= i));
        e += term;
    }
    printf("Approximation of e: %f\n", e);

    return 0;
}
