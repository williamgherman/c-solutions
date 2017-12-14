#include <stdio.h>

#define MAX_VALUE 80

void encrypt(char *message, int shift);

int main(void) {

    char c, sentence[MAX_VALUE] = {0};

    int i, n;

    printf("Enter message to be encrypted: ");
    for (i = 0; (c = getchar()) != '\n' && i < MAX_VALUE; i++)
        sentence[i] = c;

    printf("Enter shift amount (1-25): ");
    scanf("%d", &n);
    encrypt(sentence, n);
    printf("%s\n", sentence);

    return 0;
}

void encrypt(char *message, int shift) {

    while (*message) {
        if (*message >= 'A' && *message <= 'Z')
            *message = ((*message - 'A') + shift) % 26 + 'A';
        else if (*message >= 'a' && *message <= 'z')
            *message = ((*message - 'a') + shift) % 26 + 'a';
        message++;
    }
}
