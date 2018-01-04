#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>  /* C99+ only */

/*
#define QUEUE_SIZE 100
*/
typedef int Item;
/*
struct queue_t {
    contents[QUEUE_SIZE];
}
*/
typedef struct queue_t *Queue;

void queue_append(Queue, Item i);
void queue_remove_head(Queue);
Item queue_head(Queue);
Item queue_last(Queue);
bool queue_is_empty(Queue);

#endif
