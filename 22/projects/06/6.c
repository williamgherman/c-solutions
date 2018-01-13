#include <stdio.h>
#include <ctype.h>  /* isprint */
#include <stdlib.h> /* exit */

int main(int argc, char *argv[])
{
    FILE *fp;
    char c;
    int i;
    unsigned char b[10];
    unsigned long long int offset = 0, bytes_read;

    if (argc != 2)
    {
        fprintf(stderr, "USAGE: %s filename\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    if ((fp = fopen(argv[1], "rb")) == NULL)
    {
        fprintf(stderr, "Error: %s cannot be opened\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    printf("Offset              Bytes              Characters\n");
    printf("------  -----------------------------  ----------\n");

    while ((bytes_read = fread(b, sizeof(unsigned char), 10, fp)) > 0)
    {
        printf("%6d  ", offset);

        for (i = 0; i < 10; i++)
        {
            if (i >= bytes_read)
                printf("   ");
            else
                printf("%-3.2X", b[i]);
        }
        printf(" ");
        
        for (i = 0; i < bytes_read; i++)
            printf("%c", isprint(b[i]) ? b[i] : '.');
        printf("\n");
        offset += 10;
    }

    fclose(fp);
    exit(EXIT_SUCCESS);
}
