//Solution a)
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> 
#include <strings.h>
#define array_size 100

int main(void) {

printf("enter a message: ");

char array[array_size];
memset(array,'\0',sizeof(array));

char counter=0;

while(((array[counter]=getchar())!='\n') && counter++<array_size);

printf("Reversal is: ")
for(unsigned char i=strlen(array);i--;) putchar(array[i]);


    return 0;

}

//////


//Solution b)

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <strings.h>
#define array_size 100

int main(void) {

printf("enter a message: ");

char array[array_size];
memset(array,'\0',sizeof(array));

char *p=&array[0];

while(((*p=getchar())!='\n') && p++<array+array_size);

printf("Reversal is: ");
for(--p;p>&array[0];) putchar(*p--);


    return 0;

}

