#include <stdio.h>
#include <stdlib.h> /* malloc, free, exit */
#include "queue.h"

static void queue_underflow(void);
static void empty_queue(Queue q);

struct node {
    Item value;
    struct node *next;
};

struct queue_t {
    struct node *first;
    struct node *last;
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
    q->first = NULL;
    q->last = NULL;
    q->items = 0;
    return q;
}

void queue_destroy(Queue q)
{
    empty_queue(q);
    free(q);
}

static void empty_queue(Queue q)
{
    while (!queue_is_empty(q))
        queue_remove_head(q);
}

void queue_append(Queue q, Item i)
{
    struct node *new_node;
    if ((new_node = malloc(sizeof(struct node))) == NULL)
    {
        printf("Error, malloc failed in queue_append\n");
        exit(EXIT_FAILURE);
    }
    new_node->value = i;
    new_node->next = NULL;

    if (queue_is_empty(q))
        q->first = q->last = new_node;
    else
    {
        q->last->next = new_node;
        q->last = new_node;
    }
    q->items++;
}

void queue_remove_head(Queue q)
{
    if (!queue_is_empty(q))
    {
        struct node *temp = q->first;
        if (q->first == q->last)
            q->first = q->last = NULL;
        else
            q->first = q->first->next;
        free(temp);
        q->items--;
    } else 
        queue_underflow();
}

Item queue_head(Queue q)
{
    if (!queue_is_empty(q))
        return q->first->value;
    else
        queue_underflow();
}

Item queue_last(Queue q)
{
    if (!queue_is_empty(q))
    {
        return q->last->value;
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
