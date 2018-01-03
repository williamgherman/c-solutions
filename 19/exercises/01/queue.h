#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>  /* C99+ only */

typedef int Item;
typedef struct queue_t *Queue;

void queue_append(Queue, Item i);
void queue_remove_head(Queue);
Item queue_head(Queue);
Item queue_last(Queue);
bool queue_is_empty(Queue);

#endif
