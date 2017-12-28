#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> /* C99+ only                */
#include "stack.h"   /* as shown in Section 15.2 */

struct node {
    int value;
    struct node *next;
};

struct node *top = NULL;

void make_empty(void) {
    struct node *temp;

    while (top != NULL) {
        temp = top;
        top = top->next;
        free(temp);
    }
}

bool is_empty(void) {
    return top == NULL;
}

bool push(int i) {
    struct node *new_node;
    new_node = malloc(sizeof(struct node));
    if (new_node == NULL)
        return false;
    new_node->value = i;
    new_node->next = top;
    top = new_node;

    return true;
}

int pop(void) {
    struct node *temp;
    int i;

    if (is_empty()) {
        printf("Error: stack underflow\n");
        exit(EXIT_FAILURE);
    }

    i = top->value;
    temp = top;
    top = top->next;
    free(temp);

    return i;
}
