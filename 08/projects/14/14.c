#include <stdbool.h>   /* C99 only */
#include <stdio.h>


#define size 150

char array[size];



int main(void)

{
    printf("Enter a sentence: ");
   for(unsigned char i=0;i<size;i++) array[i]=0;
     char i=0;
     char start=0;
     char finish=0;
     char end_char=0;

    while((array[i]=getchar())!='\n')i++;
    i--;

    for(unsigned char counter=0;counter<=i;counter++){
        if(array[counter]=='?' || array[counter]=='.' || array[counter]=='!') {
                end_char=array[counter];
        i--;
        }
    }

printf("text reversed is: ");

while(i>=0){

for(start=0,finish=i;start<=finish && array[i]!=' ';start++,i--);

for(unsigned char z=0;z<=start;z++) putchar(array[i+z]);

i--;
}

if(end_char) putchar(end_char);

  return 0;
}

