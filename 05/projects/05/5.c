#include <stdio.h>

int main(void) {

    float income, tax;

    printf("Enter taxable income: ");
    scanf("%f", &income);

    if (income <= 750.00f)
        tax = .01f * income;
    else if (income <= 2250.00f)
        tax = 7.50f + (.02f * (income - 750.00f));
    else if (income <= 3750.00f)
        tax = 37.50f + (.03f * (income - 2250.00f));
    else if (income <= 5250.00f)
        tax = 82.50f + (.04f * (income - 3750.00f));
    else if (income <= 7000)
        tax = 142.50f + (.05f * (income - 5250.00f));
    else
        tax = 230.00f + (.06f * (income - 7000.00f));

    printf("Tax due: $%.2f\n", tax);

    return 0;
}
