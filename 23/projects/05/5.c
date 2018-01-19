#include <stdio.h>
#include <math.h> /* exp */

int main(void)
{
    double a, p, r;
    int t;

    printf("Enter amount deposited: ");
    scanf("%lf", &p);
    printf("Enter interest rate: ");
    scanf("%lf", &r);
    printf("Enter number of years: ");
    scanf("%d", &t);

    r /= 100.0;
    a = p * exp(r * t);

    printf("Total compounded: $ %.2lf\n", a);

    return 0;
}
