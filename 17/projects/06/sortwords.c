#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define WORD_LEN 20

int compare_words(const void *w1, const void *w2);
void *my_malloc(size_t bytes);

int main(void)
{
    char **words = NULL, *word = NULL;
    int i, size = 1, num_words = 0;

    words = (char **) my_malloc((size_t)sizeof(char *));

    for (i = 0; ; i++) {

        word = (char *) my_malloc((size_t)WORD_LEN + 1);
        printf("Enter a word: ");
        fgets(word, WORD_LEN + 1, stdin);
        if (word[strlen(word) - 1] == '\n')
            word[strlen(word) - 1] = '\0';

        if (word[0] == '\0')
            break;

        *(words + i) = word;
        num_words++;

        if (size == num_words) {
            if ((words = (char **) realloc(words, 
                (size_t)sizeof(char *) * (size *= 2))) == NULL)
            {
                printf("Error: realloc failed\n");
                exit(EXIT_FAILURE);
            }
        }
    }

    qsort(words, num_words, sizeof(char *), compare_words);
    printf("\nIn sorted order: ");

    for (i = 0; i < num_words; i++)
        printf("%s ", *(words + i));
    printf("\n");
}

void *my_malloc(size_t bytes)
{
    void *p;
    if ((p = malloc(bytes)) == NULL) {
        printf("Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }
    return p;
}

int compare_words(const void *w1, const void *w2)
{
    return strcmp(*(char **)w1, *(char **)w2);
}
