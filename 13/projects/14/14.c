#include <stdio.h>
#include <ctype.h> /* toupper, isalpha */
#include <stdbool.h> /* C99+ only */

bool are_anagrams(const char *word1, const char *word2);

int main(void) {

    char c, word1[80], word2[80], *p;

    p = word1;

    printf("Enter first word: ");
    while ((c = getchar()) != '\n' && p < word1 + 80) {
        if (isalpha(c)) {
            *p = toupper(c);
            p++;
        }
    }
    p = '\0';

    p = word2;

    printf("Enter second word: ");
    while ((c = getchar()) != '\n' && p < word2 + 80) {
        if (isalpha(c)) {
            *p = toupper(c);
            p++;
        }
    }
    p = '\0';

    if (are_anagrams(word1, word2)) {
        printf("The words are anagrams.\n");
        return 0;
    }
    printf("The words are not anagrams.\n");
    return 0;
}

bool are_anagrams(const char *word1, const char *word2) {

    int letters[26] = {0};
    int *p = letters;

    while (*word1) {
        letters[*word1 - 'A']++;
        word1++;
    }

    while (*word2) {
        letters[*word2 - 'A']--;
        word2++;
    }

    while (*p) {
        if (*p != 0)
            return false;
        p++;
    }
    return true;
}
