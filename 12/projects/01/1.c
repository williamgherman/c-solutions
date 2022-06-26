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

//Solution a another method with 1 var

#include <stdio.h>
#include <string.h>
#define SIZE 100
int main(void) {

char array[SIZE]={0};

short i=0;

printf("Enter a message: ");

while((array[i++]=getchar())!='\n' && i<SIZE);

printf("The reversal is: ");

for(--i;i>=0;putchar(array[i--]));

putchar('\n');

return 0;
}



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

//improved solution for b
#include <stdio.h>
#include <string.h>
#define SIZE 100
int main(void) {

char array[SIZE]={0};

char *p=array;

printf("Enter a message: ");

while((*p=getchar())!='\n' && p++<array+SIZE) ;

printf("The reversal is: ");

for(--p;p>=array;putchar(*p--));

putchar('\n');

return 0;
}
