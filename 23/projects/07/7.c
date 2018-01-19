#include <stdio.h>
#include <string.h> /* strchr */
#include <ctype.h>  /* isspace */

int main(void)
{
    char c, d = '\0';
    int count;

    while ((c = getchar()) != EOF)
    {
        if (strchr(".?!", d) != NULL && isspace(c))
            count++;
        d = c;
    }

    printf("Number of sentences: %d\n", count);

    return 0;
}
