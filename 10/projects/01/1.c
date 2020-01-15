#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <strings.h>

#define STACK_SIZE 4

char contents[STACK_SIZE];
int top=0;
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char i);
int pop(void);

int main()
{
    printf("enter parenthasis: ");
    char ch=0;
    while(ch=getchar()){
        if(ch=='(' || ch=='{') push(ch);

else if(ch==')' && pop()!='(') printf("not nested properly");

else if(ch=='}' && pop()!='{')printf("not nested properly");

else if(ch=='\n'){
    if(is_empty()) {
            printf("matched");
    break;
    }
    else printf("not nested properly");

}
    }


    return 0;
}

void make_empty(void){
top=0;
}

bool is_empty(void){
return top==0;
}

bool is_full(void){
return top==STACK_SIZE;
}

void push(char i){
if(is_full()) {
    printf("stack overflow");
    exit(EXIT_FAILURE);
}

else contents[top++]=i;
}

int pop(void){
if(is_empty()) {
 printf("parenthasys arent mantched");
exit(EXIT_FAILURE);
}

else return contents[--top];
}
