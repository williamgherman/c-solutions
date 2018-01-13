/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* xor.c (Chapter 20, page 515) */
/* Performs XOR encryption */

#include <stdio.h>
#include <stdlib.h> /* exit */

#define KEY '&'

int main(int argc, char *argv[])
{
    FILE *fpin, *fpout;
    int orig_char, new_char;

    if (argc != 3)
    {
        fprintf(stderr, "USAGE: xor input_filename output_filename\n");
        exit(EXIT_FAILURE);
    }

    if ((fpin = fopen(argv[1], "rb")) == NULL)
    {
        fprintf(stderr, "Error: %s cannot be opened\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    if ((fpout = fopen(argv[2], "wb")) == NULL)
    {
        fprintf(stderr, "Error: %s cannot be created\n", argv[2]);
        exit(EXIT_FAILURE);
    }

    while ((orig_char = getc(fpin)) != EOF)
    {
        new_char = orig_char ^ KEY;
        putc(new_char, fpout);
    }

    fclose(fpin);
    fclose(fpout);
    exit(EXIT_SUCCESS);

    return 0;
}
