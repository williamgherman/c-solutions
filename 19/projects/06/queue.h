#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>  /* C99+ only */

typedef int Item;
typedef struct queue_t *Queue;

Queue queue_create(int size);
void queue_destroy(Queue q);
void queue_append(Queue, Item i);
void queue_remove_head(Queue q);
Item queue_head(Queue q);
Item queue_last(Queue q);
bool queue_is_empty(Queue q);

#endif
