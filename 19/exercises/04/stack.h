#ifndef STACK_H
#define STACK_H

#include <stdbool.h> /* C99+ only */
#define STACK_SIZE 100

typedef struct *Stack;
typedef int Item;

Stack create(void);
void destroy(Stack s);
void make_empty(Stack s);
bool is_empty(const Stack s);
bool is_full(const Stack s);
void push(Stack s, Item i);
Item pop(Stack s);

#endif
