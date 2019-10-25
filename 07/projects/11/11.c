#include <stdio.h>

int main(void) {

    char c, initial;

    printf("Enter a first and last name: ");
    scanf(" %c", &initial);
    
    while ((c = getchar()) != ' ')
        ;

    while ((c = getchar()) == ' ')
        ;

    do {
        putchar(c);
    } while ((c = getchar()) != '\n' && c != ' ');

    printf(", %c.\n", initial);

    return 0;
}
