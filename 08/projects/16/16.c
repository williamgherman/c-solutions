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

//Solution 2
#include <stdio.h>
#include <ctype.h>

#define SIZE 26

int main(void) {

unsigned char first_word[SIZE]={0};

unsigned char i=0;

printf("Enter first word: ");

while((i=toupper(getchar()))!='\n') first_word[i-'A']++;

printf("Enter second word: ");

while((i=toupper(getchar()))!='\n') first_word[i-'A']--;

printf("The words are ");
for(i=0;i<SIZE;i++){
if(first_word[i]) {
puts("not anagrams");
return 0;
}
}
puts("anagrams");
  return 0;
}

