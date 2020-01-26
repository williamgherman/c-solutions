//Solution a)
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> 
#include <strings.h>


int main(void) {

printf("enter a message: ");

char array[100];
memset(array,'\0',sizeof(array));

char counter=0;

while(((array[counter]=getchar())!='\n') && counter++<100);

printf("Reversal is: ")
for(unsigned char i=strlen(array);i--;) putchar(array[i]);


    return 0;

}

//////




#include <stdio.h>

#define MAX_LEN 100

int main(void) {
    
    char message[MAX_LEN];
    char c, *p = message;

    printf("Enter a message: ");

    while ((c = getchar()) != '\n' && p < message + MAX_LEN)
        *p++ = c;

    p--;
    printf("Reversal is: ");

    while (p >= message)
        putchar(*p--);

    printf("\n");

    return 0;
}    
