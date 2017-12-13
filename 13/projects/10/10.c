#include <stdio.h>

void reverse_name(char *name);

int main(void) {

    char name[81];

    printf("Enter a first and last name: ");
    fgets(name, sizeof(name), stdin);
    reverse_name(name);

    return 0;
}

void reverse_name(char *name) {

    char *p = name, initial;

    while (*p == ' ')
        p++;
    initial = *p++;

    while (*p && *p++ != ' ')
        ;

    while (*p && *p != '\n')
        putchar(*p++);
    printf(", %c.\n", initial);
}
