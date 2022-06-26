#include <stdio.h>
#include <stdlib.h> /* exit */
#include <stdbool.h> /* C99+ only */
#include <ctype.h>

#define STACK_SIZE 100

char contents[STACK_SIZE] = {0};

int top = 0;

void make_empty(void);

bool is_empty(void);

bool is_full(void);

void push(int i);

char pop(void);

void stack_overflow(void);

void stack_underflow(void);

int main(void) {

while(1){
        printf("enter an expression: ");
char ch;
while((ch=getchar())!='\n'){

      if(isdigit(ch)) push(ch-48);
      else if(ch=='*') push(pop()*pop());
      else if(ch=='+')push(pop()+pop());
      else if(ch=='-'){
      int a=pop();
      int b=pop();
      push(b-a);
        }
      else if(ch=='/'){
      int a=pop();
      int b=pop();
      push(b/a);
        }
        else if(ch=='='){
            printf("\nvalue of expression: %d\n",pop());
        }

              }}
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

void push(int i) {
    if (is_full()) stack_overflow();
    else contents[top++] = i;
}

char pop(void) {
    if (is_empty()){
        stack_underflow();
        return 0;
        }
    else return contents[--top];
}

void stack_overflow(void) {
    printf("\nExpression is too complex\n");
    exit(EXIT_FAILURE);
}

void stack_underflow(void) {
    printf("\nNot enough operands in expression\n");
    exit(EXIT_FAILURE);
}
