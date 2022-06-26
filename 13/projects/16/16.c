#include <stdio.h>

#include <stdlib.h>

#include <ctype.h>

#include <strings.h>

#define array_size 100

void reverse(char *message);

int main(void) {

printf("enter a message: ");

char array[array_size];
char i=0;

while(((array[i]=getchar())!='\n') && i++<array_size);
array[i]='\0';
reverse(array);
printf("Reversal is:  %s",array);

    return 0;
}

void reverse(char *message){
char *q=&message[strlen(message)-1];
char *p=message;
    while(p!=q){
    char tmp=*q;
    *q--=*p;
    *p++=tmp;
    }
}

//Solution2
void reverse_message(char *message){
    char *q = &message[strlen(message)-1];
    for (char *p = message,tmp; p<=q;tmp=*q,*q--=*p,*p++=tmp);
}
//solution3
void reverse(char *message){

char *q=&message[strlen(message)-1];

for(char *p=message;p<q;*p^=*q,*q=*p^*q,*p++^=*q--);

}
