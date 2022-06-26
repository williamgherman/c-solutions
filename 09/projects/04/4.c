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

//solution 2
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>
#define SIZE 26


void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);

void read_word(int counts[26]){
unsigned char i=0;
while((i=toupper(getchar()))!='\n') counts[i-'A']++;
}

bool equal_array(int counts1[26], int counts2[26]){
return !memcmp(counts1,counts2,SIZE);
}

int main(void) {

int first_word[SIZE]={0};
int second_word[SIZE]={0};

printf("Enter first word: ");
read_word(first_word);

printf("Enter second word: ");
read_word(second_word);

printf("The words are ");
puts(equal_array(first_word,second_word)?"Anagrams":"Not anagrams");

  return 0;
}
