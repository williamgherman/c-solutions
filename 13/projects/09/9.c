#include <stdio.h>
#include <ctype.h>

int compute_vowel_count(const char *sentence);

int main(void) {

    char sentence[81];
    char c, *p = sentence;
    
    printf("Enter a sentence: ");
    while ((c = getchar()) != '\n' && p < sentence + 80)
        *p++ = c;
    p = '\0';

    printf("Your sentence contains %d vowels.\n", compute_vowel_count(sentence));
    return 0;
}

int compute_vowel_count(const char *sentence) {

    int vowels = 0;
    while (*sentence) {
        switch(toupper(*sentence)) {
            case 'A': case 'E': case 'I': case 'O': case 'U':
                vowels++;
                break;
            default:
                break;
        }
        sentence++;
    }
    return vowels;
}
