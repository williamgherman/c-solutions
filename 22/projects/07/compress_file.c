#include <stdio.h>
#include <stdlib.h> /* exit */
#include <string.h> /* strlen, strcpy, strcat */

int main(int argc, char *argv[])
{
    FILE *fpin, *fpout;
    char *outfile;
    /* amount must be unsigned char to read/write to file.                */
    /* This program will fail to compress more than 255 sequential bytes. */
    unsigned char byte, next_byte, amount;
    /* position must be long int for ftell */
    long int position;

    if (argc != 2)
    {
        fprintf(stderr, "USAGE: %s original-file\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    if ((fpin = fopen(argv[1], "rb")) == NULL)
    {
        fprintf(stderr, "File %s cannot be opened\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    outfile = malloc(strlen(argv[1]) + 5);
    strcpy(outfile, argv[1]);
    strcat(outfile, ".rle");

    if ((fpout = fopen(outfile, "wb")) == NULL)
    {
        fprintf(stderr, "File %s cannot be written\n", outfile);
        exit(EXIT_FAILURE);
    }
    free(outfile);

    while (fread(&byte, sizeof(unsigned char), 1, fpin) > 0)
    {
        amount = 1;
        position = ftell(fpin);
        while (fread(&next_byte, sizeof(unsigned char), 1, fpin) > 0 &&
               byte == next_byte)
        {
            amount++;
        }
        fwrite(&amount, sizeof(unsigned char), 1, fpout);
        fwrite(&byte, sizeof(unsigned char), 1, fpout);
        fseek(fpin, position + (amount - 1), SEEK_SET);
    }
    fclose(fpin);
    fclose(fpout);

    exit(EXIT_SUCCESS);
}
