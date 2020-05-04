#include <stdbool.h>   /* C99 only */

#include <stdio.h>

#include <ctype.h>



#define size 26

void read_words(int array[26]);
bool equal_arrays(int array1[26],int array2[26]);

int main(void)
{
    int array1[size];
int array2[size];

    for(unsigned char i=0;i<size;array1[i]=array2[i++]=0);

printf("Enter first words: ");
read_words(array1);
printf("Enter second words: ");
read_words(array2);
printf("the words are ");
if(!equal_arrays(array1,array2)) printf("not ");
printf("anagrams");

  return 0;

}

void read_words(int array[26]){
    char ch;
while((ch=tolower(getchar()))!='\n')

    if(isalpha(ch)) array[ch-'a']++;

}


bool equal_arrays(int array1[26],int array2[26]){
    for(unsigned char i=0;i<26;i++)
        if(array1[i]!=array2[i])return false;

return true;
}

