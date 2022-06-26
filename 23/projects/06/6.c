#include <stdio.h>
#include <string.h> /* strchr */

int main(void)
{
    char c;

    while ((c = getchar()) != EOF) putchar(strchr("\a\b\f\r\t\v", c) ?'?':c);

    return 0;
}
