#include <stdio.h>
#include <stdlib.h>  /* exit */
#include <ctype.h>   /* isdigit */
#include <stdbool.h> /* C99+ only */
#include "stack.h"

int main(void) {

    char c, op1, op2;

    while(true) {

        printf("Enter an RPN expression: ");

        while ((c = getchar()) != '\n') {
            if (isdigit(c))
                push(c - '0');
            else
                switch(c) {
                    case '+': push(pop() + pop());
                              break;
                    case '-': op2 = pop();
                              op1 = pop();
                              push(op1 - op2);
                              break;
                    case '*': push(pop() * pop());
                              break;
                    case '/': op2 = pop();
                              op1 = pop();
                              push(op1 / op2);
                              break;
                    case '=': printf("Value of expression: %d\n", pop());
                              break;
                    case ' ': break;
                    default:  exit(EXIT_FAILURE);
                }
        }
    }
}
