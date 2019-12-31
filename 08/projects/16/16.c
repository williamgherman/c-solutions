#include <stdbool.h>   /* C99 only */
#include <stdio.h>
#include <ctype.h>

#define size 26

int main(void)

{
    printf("Enter first words: ");

    int array[size];

    for(unsigned char i=0;i<size;array[i++]=0);

    char ch;

while((ch=tolower(getchar()))!='\n')
    if(ch>='a' && ch<='z') array[ch-'a']++;

printf("Enter second words: ");

while((ch=tolower(getchar()))!='\n')
if(ch>='a' && ch<='z') array[ch-'a']--;

printf("The words are ");

for(unsigned char i=0;i<size;i++){
    if(array[i]){
        printf("not ");
        break;
    }
}

printf("anagrams.");


  return 0;
}

