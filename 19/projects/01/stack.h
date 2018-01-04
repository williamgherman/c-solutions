#ifndef STACK_H
#define STACK_H

#include <stdbool.h>

typedef struct stack_type *Stack;
typedef int Item;

Stack create();
void destroy(Stack s);
void make_empty(Stack s);
bool is_empty(const Stack s);
bool is_full(const Stack s);
void push(Stack s, Item i);
Item pop(Stack s);

#endif
