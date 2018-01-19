#include <stdio.h>
#include <string.h> /* strchr */

int main(void)
{
    char c;

    while ((c = getchar()) != EOF)
    {
        if (strchr("\a\b\f\r\t\v", c) != NULL)
            putchar('?');
        else
            putchar(c);
    }

    return 0;
}
