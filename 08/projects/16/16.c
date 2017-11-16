#include <stdio.h>
#include <ctype.h> /* toupper, isalpha */

int main(void) {

    int i,
        same = 1,
        letters[26] = {0};
    char c;

    printf("Enter first word: ");
    while ((c = getchar()) != '\n') {
        if (isalpha(c))
            letters[toupper(c) - 'A']++;
    }
    printf("Enter second word: ");
    while ((c = getchar()) != '\n') {
        if (isalpha(c))
            letters[toupper(c) - 'A']--;
    }

    for (i = 0; i < 26; i++) {
        if (letters[i] != 0) {
            same = 0;
            break;
        }
    }
    if (same) {
        printf("The words are anagrams.\n");
        return 0;
    }
    printf("The words are not anagrams.\n");
    return 0;
}
