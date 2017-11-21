#include <stdio.h>
#include <ctype.h> /* toupper, isalpha */
#include <stdbool.h> /* C99 and later */

void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);

int main(void) {

    int i,
        counts[26] = {0},
        counts2[26] = {0};

    read_word(counts);
    read_word(counts2);

    if (equal_array(counts, counts2))
        printf("The words are anagrams.\n");
    else
        printf("The words are not anagrams.\n");

    return 0;
}

void read_word(int counts[26]) {

    char c;

    printf("Enter word: ");
    while ((c = getchar()) != '\n') {
        if (isalpha(c))
            counts[toupper(c) - 'A']++;
    }
}

bool equal_array(int counts1[26], int counts2[26]) {

    int i;
    
    for (i = 0; i < 26; i++) {
        if (counts1[i] != counts2[i])
            return false;
    }
    return true;
}
