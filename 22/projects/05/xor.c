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

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define KEY '&'

int main(int argc, char * argv[])
{
    if(argc<3){
        fprintf(stderr,"too few arguments");
        exit(EXIT_FAILURE);
    }

    FILE *input;
    FILE *output;

    if(!(input=fopen(argv[1],"rb"))) {
            fprintf(stderr,"cant open %s",argv[1]);
    exit(EXIT_FAILURE);
    }

    if(!(output=fopen(argv[2],"wb"))){
        fprintf(stderr,"cant open %s",argv[2]);
        exit(EXIT_FAILURE);
    }
  int orig_char;

  while ((orig_char = getc(input)) != EOF) putc(orig_char^=KEY,output);
  
  fclose(input);
  fclose(output);

  return 0;
}
