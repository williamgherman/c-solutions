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
