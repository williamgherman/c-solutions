/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* line.c (Chapter 15, page 364) */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "line.h"

#define MAX_LINE_LEN 60

int line_len = 0;
int num_words = 0;

struct node {
    struct node *next;
    char word[];
} *line = NULL;

void clear_line(void)
{
  struct node *temp;
  while (line != NULL) {
      temp = line;
      line = line->next;
      free(temp);
  }
  line_len = 0;
  num_words = 0;
}

void add_word(const char *word)
{
    struct node *new_word, **pp = &line;
    if ((new_word = malloc(sizeof(struct node) + strlen(word) + 1)) == NULL) {
        printf("Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }
    strcpy(new_word->word, word);
    new_word->next = NULL;

    while (*pp != NULL)
        pp = &(*pp)->next;
    *pp = new_word;
    line_len += strlen(word);
    if (num_words > 0)
        line_len++; /* add a space for every word except the first */
    num_words++;
}

int space_remaining(void)
{
  return MAX_LINE_LEN - line_len;
}

void write_line(void)
{
  int extra_spaces, spaces_to_insert, i;
  int char_count = 0;
  struct node *entry = line;
  extra_spaces = space_remaining();

  while (char_count < line_len && entry != NULL) {
      printf("%s", entry->word);
      if (num_words > 1) {
          spaces_to_insert = extra_spaces / (num_words - 1);
          for (i = 1; i <= spaces_to_insert + 1; i++)
              putchar(' ');
          extra_spaces -= spaces_to_insert;
      }
      char_count += strlen(entry->word) + 1;
      num_words--;
      entry = entry->next;
  }
  putchar('\n');
}

void flush_line(void)
{
  int i;
  struct node *entry = line;
  if (line_len > 0) {
      for (i = 0; entry != NULL; i++, entry = entry->next) {
          if (i > 0 && entry->next != NULL)
              putchar(' ');
          printf("%s ", entry->word);
      }
  }
  printf("\n");
  clear_line();
}
