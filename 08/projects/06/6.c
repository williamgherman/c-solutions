#include <stdio.h>
#include <ctype.h>

#define MAX_SIZE 100

int main(void) {

    char c, message[MAX_SIZE] = {0};
    int i = 0;

    printf("Enter message: ");
    while((c = getchar()) != '\n' && i < MAX_SIZE)
        message[i++] = c;
    
    printf("In B1FF-speak: ");

    for (i = 0; i < MAX_SIZE; i++) {
        switch (c = toupper(message[i])) {
            case 'A':
                putchar('4');
                break;
            case 'B':
                putchar('8');
                break;
            case 'E':
                putchar('3');
                break;
            case 'I':
                putchar('1');
                break;
            case 'O':
                putchar('0');
                break;
            case 'S':
                putchar('5');
                break;
            default:
                putchar(c);
                break;
        }
    }
    printf("!!!!!!!!!!\n");

    return 0;
}

//How about this?
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#define MAX_SIZE 100
int main(void)
{

char message[MAX_SIZE]={0};

printf("Enter message: ");

char c;

unsigned char counter=0;

while((c=toupper(getchar()))!='\n' && counter<MAX_SIZE){

switch(c){
case 'A': message[counter++]='4';break;
case 'B': message[counter++]='8';break;
case 'E': message[counter++]='3';break;
case 'I': message[counter++]='1';break;
case 'O': message[counter++]='0';break;
case 'S': message[counter++]='5';break;
default: message[counter++]=c;break;
}

}
printf("Translated message: %s!!!!!!!!!!\n",message);
   return 0;
}
