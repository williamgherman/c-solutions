/* quicksort, edited for struct part */

#ifndef QUICKSORT_H
#define QUICKSORT_H

#include "inventory.h"

void quicksort(struct part a[], int low, int high);
int split(struct part a[], int low, int high);

#endif
