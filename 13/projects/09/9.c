#include <stdio.h>
#include <ctype.h>
int compute_vowel_count(const char *sentence);
int main(void) {

    char c[100];
    
    printf("Enter a sentence: ");

char i=0;
    while ((c[i++] = toupper(getchar())) != '\n');
     c[--i]='\0';

printf("vowels=%d",compute_vowel_count(c));

    return 0;

}
int compute_vowel_count(const char *sentence){
    char vowels=0;
    
for(char *p=sentence;*p!=NULL;p++) if(*p=='A' || *p=='E' || *p=='I' || *p=='O' || *p=='U') vowels++;

return vowels;
}
