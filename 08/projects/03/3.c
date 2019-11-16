/* Checks numbers for repeated digits */

#include <stdio.h>

int main(void) {

    int digit, i, occurrences[10] = {0};
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    if (n <= 0) {
        printf("Digit:\t\t 0  1  2  3  4  5  6  7  8  9\n");
        printf("Occurrences:\t 0  0  0  0  0  0  0  0  0  0\n");
    }

    while (n > 0) {        
        while (n > 0) {
            digit = n % 10;
            occurrences[digit]++;
            n /= 10;
        }
    
        printf("Digit:\t\t 0  1  2  3  4  5  6  7  8  9\n");
        printf("Occurrences:\t");

        for (i = 0; i < 10; i++) {
            printf("%2d ", occurrences[i]);
            occurrences[i] = 0;
        }
        printf("\nEnter a number: ");
        scanf("%ld", &n);
    }
    return 0;
}
