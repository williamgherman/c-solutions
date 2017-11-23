#include <stdio.h>
#include <stdlib.h> /* exit */
#include <stdbool.h> /* C99+ only */

#define STACK_SIZE 100

/* external variables */
char contents[STACK_SIZE] = {0};
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char i);
char pop(void);
void stack_overflow(void);
void stack_underflow(void);

int main(void) {

    char c, d;

    printf("Enter parentheses and/or braces: ");
    
    while ((c = getchar()) != '\n') {
        if (c == '}' && pop() != '{') {
            printf("Parentheses/braces are not nested properly\n");
            return 0;
        }
        else if (c == ')' && pop() != '(') {
            printf("Parentheses/braces are not nested properly\n");
            return 0;
        } else if (c == '(' || c == '{')
            push(c);
    }
    
    if (!is_empty) {
        printf("Parentheses/braces are not nested properly\n");
        return 0;
    }

    printf("Parentheses/braces are nested properly\n");
    return 0;
}
void make_empty(void) {
    top = 0;
}

bool is_empty(void) {
    return top == 0;
}

bool is_full(void) {
    return top == STACK_SIZE;
}

void push(char i) {

    if (is_full())
        stack_overflow();
    else
        contents[top++] = i;
}

char pop(void) {

    if (is_empty())
        stack_underflow();
    else
        return contents[--top];
}

void stack_overflow(void) {
    printf("\nStack overflow\n");
    exit(EXIT_FAILURE);
}

void stack_underflow(void) {
    printf("\nStack underflow\n");
    exit(EXIT_FAILURE);
}
