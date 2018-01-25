#include <stdio.h>
#include <math.h>

int main(void)
{
    double real, imag, r, theta;

    printf("Enter r: ");
    scanf("%lf", &r);
    printf("Enter theta (in radians): ");
    scanf("%lf", &theta);

    real = r * cos(theta);
    imag = r * sin(theta);

    printf("%g %c %gi\n", real, imag < 0 ? '-' : '+', imag);
    return 0;
}
