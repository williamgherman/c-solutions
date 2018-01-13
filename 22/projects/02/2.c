#include <stdio.h>
#include <ctype.h>  /* toupper, isalpha */
#include <stdlib.h> /* exit */

int main(int argc, char *argv[])
{
    FILE *fp;
    char c;


    if (argc != 2)
    {
        fprintf(stderr, "USAGE: allcaps filename\n");
        exit(EXIT_FAILURE);
    }

    if ((fp = fopen(argv[1], "r")) != NULL)
    {
        while ((c = getc(fp)) != EOF)
        {
            if (isalpha(c))
                putchar(toupper(c));
            else
                putchar(c);
        }
        fclose(fp);
    }
    exit(EXIT_SUCCESS);
}
