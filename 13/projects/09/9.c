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


///Solution2
#include <stdio.h>
#include <ctype.h>

int compute_vowel_count(const char *sentence){
    int vowels = 0;
    while (*sentence) {
        switch (toupper(*sentence++)) {
            case 'A': case 'E': case 'I': case 'O': case 'U':
                vowels++;
                break;
            default:
                break;
        }
    }
    return vowels;
}
int main(void) {
    printf("Enter a sentence: ");
    char my_array[20] = {0};
    char c = 0;
    while ((my_array[c++] = getchar()) != '\n');
    
    
    printf("Your sentence contains %d vowels.\n", compute_vowel_count(my_array));
    return 0;
}
