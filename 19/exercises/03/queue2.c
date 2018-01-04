#include <stdio.h>
#include <stdlib.h> /* exit */
#include "queue.h"

static void queue_underflow(void);

static struct node {
    Item item;
    struct node *next;
} *head = NULL, *last = NULL;

static int items = 0;

void queue_append(Item i)
{
    struct node *new_node;
    if ((new_node = malloc(sizeof(struct node))) == NULL)
    {
        printf("Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }

    new_node->item = i;
    new_node->next = NULL;
    items++;

    if (head == NULL)
        head = last = new_node;
    else
    {
        last->next = new_node;
        last = new_node;
    }
}

void queue_remove_head(void)
{
    if (!queue_is_empty())
    {
        struct node *temp = head;
        head = head->next;
        free(temp);
        items--;
    } else
        queue_underflow();
}

Item queue_head(void)
{
    if (!queue_is_empty())
        return head->item;
    else
        queue_underflow();
}

Item queue_last(void)
{
    if (!queue_is_empty())
    {
        return tail->item;
    } else
        queue_underflow();
}

bool queue_is_empty()
{
    return items == 0;
}

static void queue_underflow(void)
{
    printf("Error: queue empty\n");
    exit(EXIT_FAILURE);
}
