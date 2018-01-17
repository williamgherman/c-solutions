#include <stdio.h>
#include <stdlib.h> /* exit, malloc */
#include <string.h> /* strlen, strcpy, strcat */

#define MAX_LEN 256

int main(void)
{
    FILE *fpin, *fpout;
    char c, filename[MAX_LEN], *outfile;
    int i, n, length;

    printf("Enter name of file to be encrypted: ");
    scanf("%s", filename);

    if ((fpin = fopen(filename, "r")) == NULL)
    {
        fprintf(stderr, "Error: file %s cannot be opened\n", filename);
        exit(EXIT_FAILURE);
    }

    outfile = malloc(strlen(filename) + 5);
    strcpy(outfile, filename);
    strcat(outfile, ".enc");

    if ((fpout = fopen(outfile, "w")) == NULL)
    {
        fprintf(stderr, "Error: file %s cannot be written\n", outfile);
        exit(EXIT_FAILURE);
    }

    printf("Enter shift amount (1-25): ");
    scanf("%d", &n);

    while ((c = getc(fpin)) != EOF)
    {
        if (c >= 'A' && c <= 'Z')
            putc(((c - 'A') + n) % 26 + 'A', fpout);
        else if (c >= 'a' && c <= 'z')
            putc(((c - 'a') + n) % 26 + 'a', fpout);
        else
            putc(c, fpout);
    }
    fclose(fpin);
    fclose(fpout);
    
    exit(EXIT_SUCCESS);
}

