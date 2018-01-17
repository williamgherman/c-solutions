#include <stdio.h>
#include <stdlib.h> /* exit */

int main(int argc, char *argv[])
{
    FILE *fpin, *fpout;
    char c;

    if (argc != 3)
    {
        fprintf(stderr, "USAGE: %s input-file output-file\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    if ((fpin = fopen(argv[1], "rb")) == NULL)
    {
        fprintf(stderr, "Error: file %s cannot be read\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    if ((fpout = fopen(argv[2], "wb")) == NULL)
    {
        fprintf(stderr, "Error: file %s cannot be written\n", argv[2]);
        exit(EXIT_FAILURE);
    }

    while ((c = getc(fpin)) != EOF)
    {
        if (c != '\x0d' && c != '\x1a')
            fputc(c, fpout);
    }

    fclose(fpin);
    fclose(fpout);

    exit(EXIT_SUCCESS);
}
