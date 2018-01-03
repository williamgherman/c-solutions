#include <stdio.h>
#include <stdlib.h> /* exit */
#include "queue.h"

#define QUEUE_SIZE 100

static void queue_overflow(void);
static void queue_underflow(void);

struct queue_t {
    Item contents[QUEUE_SIZE];
    int empty_index;
    int removal_index;
    int items;
};

void queue_append(Queue, Item i)
{
    if (items < QUEUE_MAX)
    {
        Queue->contents[Queue->empty_index] = i;
        empty_index = ((Queue->empty_index + 1) == QUEUE_SIZE) 
            ? 0 : Queue->empty_index + 1;
        Queue->items++;
    } else
        queue_overflow(Queue);
}

void queue_remove_head(Queue)
{
    if (!queue_is_empty(Queue))
    {
        Queue->removal_undex++;
        Queue->items--;
    } else 
        queue_underflow(Queue);
}

Item queue_head(Queue)
{
    if (!queue_is_empty(Queue))
        return Queue->contents[Queue->removal_index];
    else
        queue_underflow(Queue);
}

Item queue_last(Queue)
{
    if (!queue_is_empty(Queue))
    {
        if (Queue->empty_index == 0)
            return Queue->contents[QUEUE_SIZE-1];
        else
            return Queue->contents[Queue->empty_index-1];
    } else
        queue_underflow(Queue);
}

bool queue_is_empty(Queue)
{
    return Queue->items == 0;
}

static void queue_underflow(void)
{
    printf("Error: queue empty\n");
    exit(EXIT_FAILURE);
}

static void queue_overflow(void)
{
    printf("Error: queue full\n");
    exit(EXIT_FAILURE);
}
