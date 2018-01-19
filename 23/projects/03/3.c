#include <stdio.h>
#include <ctype.h>   /* isalpha, isspace, toupper */
#include <stdbool.h> /* C99+ */

int main(void)
{
    char c;
    bool in_word = false;

    while ((c = getchar()) != EOF)
    {
        if (isalpha(c) && !in_word)
        {
            putchar(toupper(c));
            in_word = true;
        }
        else if (isspace(c))
        {
            in_word = false;
            putchar(c);
        }
        else
            putchar(c);
    }

    return 0;
}
