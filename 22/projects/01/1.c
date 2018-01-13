/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* canopen.c (Chapter 22, page 547) */
/* Checks whether a file can be opened for reading */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
  int i;
  bool openfail = false;
  FILE *fp;

  if (argc < 2) {
    printf("usage: canopen filename filename2 ...\n");
    exit(EXIT_FAILURE);
  }

  for (i = 1; i < argc; i++)
  {
    if ((fp = fopen(argv[i], "r")) == NULL) {
      printf("%s can't be opened\n", argv[i]);
      openfail = true;
    } else {
      printf("%s can be opened\n", argv[i]);
      fclose(fp);
    }
  }
  
  if (openfail)
      exit(EXIT_FAILURE);
  exit(EXIT_SUCCESS);
}
