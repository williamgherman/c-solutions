#include <stdio.h>

int main(void) {

    char c;

    printf("Enter phone number: ");
    while ((c = getchar()) != '\n') {
        switch (c) {
            case 'A': case 'B': case 'C':
                putchar('2');
                break;
            case 'D': case 'E': case 'F':
                putchar('3');
                break;
            case 'G': case 'H': case 'I':
                putchar('4');
                break;
            case 'J': case 'K': case 'L':
                putchar('5');
                break;
            case 'M': case 'N': case 'O':
                putchar('6');
                break;
            case 'P': case 'R': case 'S':
                putchar('7');
                break;
            case 'T': case 'U': case 'V':
                putchar('8');
                break;
            case 'W': case 'X': case 'Y':
                putchar('9');
                break;
            default:
                putchar(c);
                break;
        }
    }
    printf("\n");
    return 0;
}
