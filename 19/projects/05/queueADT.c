#include <stdio.h>
#include <stdlib.h> /* malloc, free, exit */
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

Queue queue_create(void)
{
    Queue q = malloc(sizeof(struct queue_t));
    if (q == NULL)
    {
        printf("Error: malloc failed in queue_create\n");
        exit(EXIT_FAILURE);
    }
    q->empty_index = 0;
    q->removal_index = 0;
    q->items = 0;
    return q;
}

void queue_destroy(Queue q)
{
    free(q);
}


void queue_append(Queue q, Item i)
{
    if (q->items < QUEUE_SIZE)
    {
        q->contents[q->empty_index] = i;
        q->empty_index = ((q->empty_index + 1) == QUEUE_SIZE) 
            ? 0 : q->empty_index + 1;
        q->items++;
    } else
        queue_overflow();
}

void queue_remove_head(Queue q)
{
    if (!queue_is_empty(q))
    {
        q->removal_index++;
        q->items--;
    } else 
        queue_underflow();
}

Item queue_head(Queue q)
{
    if (!queue_is_empty(q))
        return q->contents[q->removal_index];
    else
        queue_underflow();
}

Item queue_last(Queue q)
{
    if (!queue_is_empty(q))
    {
        if (q->empty_index == 0)
            return q->contents[QUEUE_SIZE-1];
        else
            return q->contents[q->empty_index-1];
    } else
        queue_underflow();
}

bool queue_is_empty(Queue q)
{
    return q->items == 0;
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
