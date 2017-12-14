#include <stdio.h>
#include <ctype.h> /* isalpha, toupper */
#include <stdbool.h> /* C99+ only */

#define MAX_LEN 100

bool is_palindrome(const char *message);

int main(void) {

    char message[MAX_LEN];
    char c, *p = message;

    printf("Enter a message: ");

    while ((c = toupper(getchar())) != '\n' & p < message + MAX_LEN) {
        if (isalpha(c))
            *p++ = c;
    }
    if (is_palindrome(message)) {
        printf("Palindrome\n");
        return 0;
    }
    printf("Not a palindrome\n");
    return 0;
}

bool is_palindrome(const char *message) {
    const char *p, *q;
    p = q = message;

    while (*q)
        q++;
    q--;

    while (p < q) {
        if (*p != *q)
            return false;
        p++; q--;
    }
    return true;
}
