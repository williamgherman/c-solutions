/* Adds two fractions */

#include <stdio.h>

int main(void) {
    int num1, denom1, num2, denom2, result_num, result_denom;
    char operator;

    printf("Enter two fractions separated by an operator: ");
    scanf("%d /%d %c %d /%d", &num1, &denom1, &operator, &num2, &denom2);

    switch (operator) {
        case '+':
            result_num = num1 * denom2 + num2 * denom1;
            result_denom = denom1 * denom2;
            break;
        case '-':
            result_num = num1 * denom2 - num2 * denom1;
            result_denom = denom1 * denom2;
            break;
        case '*':
            result_num = num1 * num2;
            result_denom = denom1 * denom2;
            break;
        case '/':
            result_num = num1 * denom2;
            result_denom = num2 * denom1;
            break;
        default:
            printf("Operation %c not supported.\n", operator);
            return 1; /* operation error */
    }

    int temp, num_temp = result_num, gcd = result_denom;
    while (num_temp != 0) {
        temp = gcd % num_temp;
        gcd = num_temp;
        num_temp = temp;
    }

    if (result_num / gcd == result_denom / gcd)
        printf("Result: %d\n", result_num / gcd);
    else if (result_num > result_denom) {
        printf("Result: %d %d/%d\n",
        result_num / result_denom, result_num % result_denom, result_denom);
    } else
        printf("Result: %d/%d\n", result_num / gcd, result_denom / gcd);

    return 0;
}
