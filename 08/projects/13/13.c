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
