#include <stdbool.h>   /* C99 only */

#include <stdio.h>

#include <ctype.h>
#include <string.h>
#define size 26
bool are_anagrams(const char *word1, const char *word2);
int main(void)

{
    printf("Enter first words: ");

    char array[size];
    char array2[size];
    char ch=0;

while((array[ch++]=tolower(getchar()))!='\n' && ch<size);
array[--ch]='\0';

printf("Enter second words: ");
ch=0;
while((array2[ch++]=tolower(getchar()))!='\n' && ch<size);
array2[--ch]='\0';

if(are_anagrams(array,array2)) printf("are anagrams");
else printf("are not anagrams");

  return 0;

}

bool are_anagrams(const char *word1, const char *word2){
char table[26];
memset(table,0,sizeof(table));

for(char ch='a';ch<='z';ch++){

    for(char *p=word1,*q=word2;p<=word1+strlen(word1) && q<=word2+strlen(word2);p++,q++){
        if(*p==ch) table[ch-'a']++;
        if(*q==ch) table[ch-'a']--;
    }
}

for(unsigned char ch=0;ch<sizeof(table)/sizeof(table[0]);ch++) if(table[ch]) return false;
return true;

}
//solution 2
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

bool are_anagrams(const char *word1, const char *word2);

bool are_anagrams(const char *word1, const char *word2){

if(strlen(word1)!=strlen(word2)) return false;
short sum=0;

while(isalpha(*word1))sum+=*word1++;
printf("sum=%hd",sum);
while(isalpha(*word2))sum-=*word2++;
printf("sum=%hd",sum);

return !sum?true:false;

}

#define SIZE 26

int main(void) {

char first_word[SIZE]={0};
char second_word[SIZE]={0};

unsigned char i=0;

printf("Enter first word: ");

while((first_word[i++]=getchar())!='\n');

printf("u enterered %s",first_word);

printf("Enter second word: ");
i=0;

while((second_word[i++]=getchar())!='\n');

printf("words are");
are_anagrams(first_word,second_word)?puts("anagrams"):puts("not anagrams");

return 0;
}
