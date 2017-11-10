#include <stdio.h>

int main(void) {

    float largest = 0.0f;
    float current;

    do {
        printf("Enter a number: ");
        scanf("%f", &current);

        if (current > largest)
            largest = current;
    } while (current > 0);

    printf("\nThe largest number entered was %f\n", largest);

    return 0;
}
