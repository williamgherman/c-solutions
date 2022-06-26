#include <stdio.h>



int main(void) {

    printf("Enter a first and last name: ");

    char fname;

    char lastname[20];

    char counter=0;

    for(unsigned char i=0;i<20;i++) lastname[i]=0;

    fname=getchar();

    while(getchar()!=' ');

    unsigned char i=0;

    while((lastname[i++]=getchar())!='\n') counter++;

    for(unsigned char i=0;i<counter;putchar(lastname[i++]));

    printf(", %c.\n",fname);

    return 0;

}
#include <stdio.h>
#include <ctype.h>

#define SIZE 20
int main(void) {

    char f_name;
    char lastname[SIZE]={0};

    printf("Enter a first and last name: ");

   scanf(" %c",&f_name);
   while(!isspace(getchar()));
   unsigned char i=0;
   while(isalpha(lastname[i]=getchar()) && i++<SIZE);

   !isalpha(lastname[i])?lastname[i]='\0':lastname[i];

   printf("You entered the name: %s, %c.\n",lastname,f_name);

   return 0;
}
