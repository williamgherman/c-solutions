#include <stdio.h>
#include <stdlib.h> /* exit */
#include <stdbool.h> 
#include <ctype.h> /* isdigit */

int main(int argc, char *argv[])
{
    FILE *fp;
    char area[3+1], local[3+1], exact[4+1];
    char i, c;
    bool complete;

    if (argc != 2)
    {
        fprintf(stderr, "USAGE: %s filename\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    if ((fp = fopen(argv[1], "r")) == NULL)
    {
        fprintf(stderr, "Error: %s cannot be read\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    complete = false;
    i = 0;
    while ((c = getc(fp)) != EOF)
    {
        if (isdigit(c) && i < 3)
            area[i++] = c;
        if (i == 3)
            area[i++] = '\0';
        else if (isdigit(c) && i > 3 && i < 7)
            local[i++ - 4] = c;
        if (i == 7)
            local[i++ - 4] = '\0';
        else if (isdigit(c) && i > 7 && i < 12)
            exact[i++ - 8] = c;
        if (i == 12)
        {
            exact[i++ - 8] = '\0';
            complete = true;
        }
        if (complete)
        {
            printf("(%s) %s-%s\n", area, local, exact);
            complete = false;
            i = 0;
        }
    }

    fclose(fp);

    exit(EXIT_SUCCESS);
}
