#include <stdio.h>

#define MAX_WORDS 30
#define MAX_LEN 20

int main(void) {

    int i = 0, j = 0;
    char c;
    char terminating_char = 0;
    char sentence[MAX_WORDS][MAX_LEN + 1];

    printf("Enter a sentence: ");
    while ((c = getchar()) != '\n' && i < MAX_WORDS) {
        if (c == ' ' || c == '\t') {
            sentence[i][j] = '\0';
            i++;
            j = 0;
            continue;
        }
        if (c == '.' || c == '!' || c == '?') {
            terminating_char = c;
            sentence[i][j] = '\0';
            break;
        }
        else if (j < MAX_LEN)
            sentence[i][j++] = c;
    }

    printf("Reversal of sentence: ");
    while (i > 0)
        printf("%s ", sentence[i--]);
    printf("%s%c\n", sentence[i], terminating_char);

    return 0;
}
