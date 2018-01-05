#include <stdio.h>
#include <stdlib.h>  /* exit */
#include <ctype.h>   /* isdigit */
#include "stack.h"

int main(void) {

    Stack s = create();
    char c, op1, op2;

    while(true) {

        printf("Enter an RPN expression: ");

        while ((c = getchar()) != '\n') {
            if (isdigit(c))
                push(s, c - '0');
            else
                switch(c) {
                    case '+': push(s, pop(s) + pop(s));
                              break;
                    case '-': op2 = pop(s);
                              op1 = pop(s);
                              push(s, op1 - op2);
                              break;
                    case '*': push(s, pop(s) * pop(s));
                              break;
                    case '/': op2 = pop(s);
                              op1 = pop(s);
                              push(s, op1 / op2);
                              break;
                    case '=': printf("Value of expression: %d\n", pop(s));
                              break;
                    case ' ': break;
                    default:  exit(EXIT_FAILURE);
                }
        }
    }
}
