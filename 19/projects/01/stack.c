#include <stdio.h>
#include <stdlib.h> /* exit */
#include "stack.h"

static void terminate(char *message);

struct node {
    Item value;
    struct node *next;
};

struct stack_type {
    struct node *top;
};

Stack create(void)
{
    Stack s;
    if ((s = malloc(sizeof(struct stack_type))) == NULL)
        terminate("Error, malloc failed in create()\n");
    s->top = NULL;
    return s;
}

void destroy(Stack s)
{
    make_empty(s);
    free(s);
}

void make_empty(Stack s)
{
    while (!is_empty(s))
        pop(s);
}

bool is_empty(const Stack s)
{
    return s->top == NULL;
}

bool is_full(const Stack s)
{
    return false;
}

void push(Stack s, Item i)
{
    if (is_full(s))
        terminate("Error, stack overflow.");

    struct node *new_node = malloc(sizeof(struct node));
    new_node->value = i;
    new_node->next = s->top;
    s->top = new_node;
}

Item pop(Stack s)
{
    if (is_empty(s))
        terminate("Error, stack underflow.");

    struct node *temp;
    Item value = s->top->value;
    temp = s->top;
    s->top = s->top->next;
    free(temp);
    return value;
}

static void terminate(char *message)
{
    printf("%s\n", message);
    exit(EXIT_FAILURE);
}
