#include <stdio.h>
#include <stdlib.h> /* exit */
#include <string.h> /* strcmp */

#define NAME_LEN

struct part {
    int number;
    char name[NAME_LEN + 1];
    int on_hand;
};

int main(int argc, char *argv[])
{
    FILE *fpin1, *fpin2, *fpout;
    struct part part1, part2;
    int number1, number2;

    if (argc != 4)
    {
        fprintf(stderr, "USAGE: %s input-file-1 input-file-2 output-file\n",
                argv[0]);
        exit(EXIT_FAILURE);
    }

    if ((fpin1 = fopen(argv[1], "rb")) == NULL) 
    {
        fprintf(stderr, "File %s cannot be opened\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    if ((fpin2 = fopen(argv[2], "rb")) == NULL) 
    {
        fprintf(stderr, "File %s cannot be opened\n", argv[2]);
        exit(EXIT_FAILURE);
    }

    if ((fpout = fopen(argv[3], "wb")) == NULL) 
    {
        fprintf(stderr, "File %s cannot be written\n", argv[3]);
        exit(EXIT_FAILURE);
    }

    number1 = fread(&part1, sizeof(struct part), 1, fpin1);
    number2 = fread(&part2, sizeof(struct part), 1, fpin2);
    while (number1 == 1 && number2 == 1)
    {
        if (part1.number < part2.number)
        {
            fwrite(&part1, sizeof(struct part), 1, fpout);
            number1 = fread(&part1, sizeof(struct part), 1, fpin1);
        } else if (part1.number > part2.number)
        {
            fwrite(&part2, sizeof(struct part), 1, fpout);
            number2 = fread(&part2, sizeof(struct part), 1, fpin2);
        } else
        {
            if (strcmp(part1.name, part2.name) != 0)
                fprintf(stderr, 
                        "Names don't match for part %d, using the name %s\n",
                        part1.number, part1.name);
            part1.on_hand += part2.on_hand;
            fwrite(&part1, sizeof(struct part), 1, fpout);
            number1 = fread(&part1, sizeof(struct part), 1, fpin1);
            number2 = fread(&part2, sizeof(struct part), 1, fpin2);
        }
    }

    while (number1 == 1)
    {
        fwrite(&part1, sizeof(struct part), 1, fpout);
        number1 = fread(&part1, sizeof(struct part), 1, fpin1);
    }

    while (number2 == 1)
    {
        fwrite(&part2, sizeof(struct part), 1, fpout);
        number2 = fread(&part2, sizeof(struct part), 1, fpin2);
    }

    fclose(fpin1);
    fclose(fpin2);
    fclose(fpout);

    exit(EXIT_SUCCESS);
}
