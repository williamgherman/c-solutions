/* Checks numbers for repeated digits */

#include <stdbool.h>      /* C99 only */
#include <stdio.h>

int main(void) {

    bool digit_seen[10] = {false}, 
         repeated[10] = {false};
    int digit, i;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;
        if (digit_seen[digit])
            repeated[digit] = true;
        digit_seen[digit] = true;
        n /= 10;
    }
    
    printf("Repeated digit(s): ");

    for (i = 0; i < 10; i++) {
        if (repeated[i])
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}
