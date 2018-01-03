#include <stdio.h>
#include <stdlib.h> /* exit */
#include "queue.h"

static void queue_underflow(void);

static struct node {
    Item item;
    struct node *next;
} *head = NULL, *last = NULL;

/* TODO */
