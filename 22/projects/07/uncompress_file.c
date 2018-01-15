#include <stdio.h>
#include <stdlib.h> /* exit */
#include <string.h> /* strnlen, strcpy, strcmp */

int main(int argc, char *argv[])
{
    FILE *fpin, *fpout;
    char *p, *outfile;
    /* amount must be unsigned char to read/write to file */
    unsigned char byte, amount, i;
    long int position = 0;

    if (argc != 2)
    {
        fprintf(stderr, "USAGE: %s compressed-file.rle\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    p = argv[1];
    while (*p++)
        ;
    while (p >= argv[1] && *p != '.')
        p--;
    if (strcmp(p, ".rle") != 0)
    {
        fprintf(stderr, "USAGE: %s compressed-file.rle\n", argv[1]);
        exit(EXIT_FAILURE);
    }
        

    if ((fpin = fopen(argv[1], "rb")) == NULL)
    {
        fprintf(stderr, "File %s cannot be opened\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    outfile = malloc(strlen(argv[1]) - 4);
    strncpy(outfile, argv[1], strlen(argv[1]) - 4);

    if ((fpout = fopen(outfile, "wb")) == NULL)
    {
        fprintf(stderr, "File %s cannot be written\n", outfile);
        exit(EXIT_FAILURE);
    }
    free(outfile);

    while (fread(&byte, sizeof(unsigned char), 1, fpin) > 0)
    {
        if (position % 2 == 0)
            amount = byte;
        else
        {
            for (i = 0; i < amount; i++)
                fwrite(&byte, sizeof(unsigned char), 1, fpout);
        }
        position++;
    }
    fclose(fpin);
    fclose(fpout);

    exit(EXIT_SUCCESS);
}
