#include <ctype.h> /* isspace */
#include <stdio.h>
#include "readline.h"

int read_line(char str[], int n) {
    int c, i = 0;

    while (isspace(c = getchar()))
        ;
    while (c != '\n' && c != EOF) {
        if (i < n)
            str[i++] = c;
        c = getchar();
    }
    str[i] = '\0';
    return i;
}
