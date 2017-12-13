#include <stdio.h>

#define MAX_WORDS 30
#define MAX_LEN 20

int main(void) {

    char terminating_char;
    char sentence[MAX_WORDS][MAX_LEN + 1];

    printf("Enter a sentence: ");
    for (i = 0; (c = getchar()) != '\n' && i < MAX_VALUE; i++) {
        if (c == '.' || c == '!' || c == '?') {
            terminating_char = c;
            break;
        }
        words[i] = c;
    }

    printf("Reversal of sentence: ");
    while (i >= 0) {
        while (words[--i] != ' ' && i != 0)
            ;
        j = i == 0 ? 0 : i + 1;
        while (words[j] != ' ' && words[j] != '\0')
            putchar(words[j++]);
        if (i >= 0)
            putchar(' ');
    }

    printf("\b%c\n", terminating_char);

    return 0;
}
/* TODO: finish */
