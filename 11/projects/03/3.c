#include <stdio.h>

void reduce(int numerator, int denominator,
            int *reduced_numerator, int *reduced_denominator);

int main(void) {

    int num, denom, r_num, r_denom;

    printf("Enter a fraction: ");
    scanf("%d /%d", &num, &denom);

    reduce(num, denom, &r_num, &r_denom);

    printf("In lowest terms: %d/%d\n", r_num, r_denom);

    return 0;
}

void reduce(int numerator, int denominator,
            int *reduced_numerator, int *reduced_denominator) {

    int m = numerator, n = denominator, r;

    while (n != 0) {
        r = m % n;
        m = n;
        n = r;
    }

    *reduced_numerator = numerator / m;
    *reduced_denominator = denominator / m;
}       
