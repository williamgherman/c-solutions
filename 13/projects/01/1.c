#include <stdio.h>
#include <string.h>

#define WORDLEN 20

char smallest_word[WORDLEN + 1],
         largest_word[WORDLEN + 1],
         word[WORDLEN + 1];

void get_first_word(void);
void get_another_word(void);
void get_word(void);

int main(void) {

    get_first_word();

    while (strlen(word) != 4)
        get_another_word();

    printf("\nSmallest word: %s\nLargest word: %s\n", 
           smallest_word, largest_word);
    
    return 0;
}

void get_first_word(void) {

    get_word();
    strcpy(smallest_word, word);
    strcpy(largest_word, word);
}

void get_word(void) {

    printf("Enter word: ");
    scanf("%20s", word);
}

void get_another_word(void) {

    get_word();
    if (strcmp(word, smallest_word) < 0)
        strcpy(smallest_word, word);
    else if (strcmp(word, largest_word) > 0)
        strcpy(largest_word, word);
}
