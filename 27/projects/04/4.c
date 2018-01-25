#include <stdio.h>
#include <math.h>
#include <complex.h>

#define PI (acos(-1.0))

int main(void)
{
    int k, n;
    double complex r;

    printf("Enter positive integer n: ");
    scanf("%d", &n);

    for (k = 0; k < n; k++)
    {
        (r = cexp((2 * PI * I * k) / n));
        
        if (cimag(r) == 0)
            printf("root of unity %d: %g\n", k, creal(r));
        else if (cimag(r) == 1 || cimag(r) == -1)
            printf("root of unity %d: %g %c i\n", k, creal(r),
                   cimag(r) < 0 ? '-' : '+');
        else
            printf("root of unity %d: %g %c %gi\n", k, creal(r), 
                   cimag(r) < 0 ? '-' : '+', cabs(cimag(r)));
    }
    return 0;
}
