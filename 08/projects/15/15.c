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

