#include <stdio.h>
#include <stdlib.h> /* exit */
#include <stdbool.h> /* C99+ only */
#define STACK_SIZE 100
#include <ctype.h>
#include <string.h>

char contents[STACK_SIZE];
int top = 0;

void make_empty(void);

bool is_empty(void);

bool is_full(void);

void push(int i);

char pop(void);

void stack_overflow(void);

void stack_underflow(void);

int evaluate_RPN_expression(const char *expression);

int main(void) {
while(1){

        printf("enter an expression: ");

char ch=0;
char array[50];

while((array[ch++]=getchar())!='\n' && ch<50);

array[--ch]='\0';

printf("%d",evaluate_RPN_expression(array));
    return 0;
}}
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
    printf("\nExpression is too complex\n");
    exit(EXIT_FAILURE);
}
void stack_underflow(void) {
    printf("\nNot enough operands in expression\n");
    exit(EXIT_FAILURE);
}
int evaluate_RPN_expression(const char *expression){
    for(char *p=expression;p<=expression+strlen(expression);p++){
      if(isdigit(*p)) {
            push(*p-48);
      }
      else if(*p=='*') {
            int a=pop();
      int b=pop();
      push(a*b);
}
        else if(*p=='+'){
            int a=pop();
      int b=pop();
      push(a+b);
        }
        else if(*p=='-'){
            int a=pop();
      int b=pop();
      push(b-a);
        }
        else if(*p=='/'){
            int a=pop();
      int b=pop();
      push(b/a);
        }
        else if(*p=='='){
            return pop();
        }
    }
    return -1;
              }
//solution2
#include <stdio.h>
#include <stdlib.h> /* exit */
#include <stdbool.h> /* C99+ only */
#include <ctype.h>

#define STACK_SIZE 100

int evaluate_RPN_expression(const char *expression);

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
        printf("enter an expression: ");
char word[20]={0};

unsigned char i=0;
while((word[i++]=getchar())!='\n' && i<20);

printf("%d\n",evaluate_RPN_expression(word));

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

int evaluate_RPN_expression(const char *expression){
while(*expression){
      if(isdigit(*expression)) push(*expression-48);
      else if(*expression=='*') push(pop()*pop());
      else if(*expression=='+')push(pop()+pop());
      else if(*expression=='-'){
      int a=pop();
      int b=pop();
      push(b-a);
        }
      else if(*expression=='/'){
      int a=pop();
      int b=pop();
      push(b/a);
        }
        else if(*expression=='=') return pop();
expression++;
}
return 0;
}
