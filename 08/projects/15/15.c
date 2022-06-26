#include <stdbool.h>   /* C99 only */
#include <stdio.h>


#define size 80

int main(void)

{
    printf("Enter a sentence: ");
    char array[size];
    
    for(unsigned char i=0;i<size;i++) array[i]=0;

    char i=0;
    int shift=0;
    while((array[i]=getchar())!='\n') i++;

    printf("Enter shift amount (1-25): ");
    scanf("%d",&shift);

printf("Encrypted message:");
for(unsigned char counter=0;counter<=i;counter++){
    if(array[counter]>='A' && array[counter]<='Z') putchar(((array[counter] - 'A') + shift) % 26 + 'A');
    else if (array[counter]>='a' && array[counter]<='z') putchar(((array[counter] - 'a') + shift) % 26 + 'a');
    else putchar(array[counter]);
}
putchar('\n');
  return 0;
}

//solution #2
#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define SIZE 80

int main(void) {

 char array[SIZE]={0};

 unsigned char shift_amount;
 
 printf("Enter a mesage: ");

 unsigned char i=0;

 while((array[i++]=getchar())!='\n');

 printf("Enter shift amount 1-25: ");

 scanf(" %hhu",&shift_amount);

 i=0;
 
 while(i<strlen(array)){
 putchar(array[i]>='A' && array[i]<='Z'?\
 ((array[i]-'A')+shift_amount)%26+'A':\
 array[i]>='a' && array[i]<='z'?\
 ((array[i]-'a')+shift_amount)%26+'a':array[i]);
 i++;
 }
 putchar('\n');
  return 0;
}
