#include <stdio.h>

int main(void) {

    int i;
    char c, initial, last[20] = {0};

    printf("Enter a first and last name: ");
    
    while ((c = getchar()) == ' ')
        ;
    initial = c;
    while ((getchar() != ' '))
        ;
    for (i = 0; (c = getchar()) != '\n'; i++)
        last[i] = c;

    printf("You entered the name: ");
    for (i = 0; last[i] != '\0'; i++)
        putchar(last[i]);
    printf(", %c.\n", initial);

    return 0;
}
