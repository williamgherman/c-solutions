#include <stdio.h>
#include <ctype.h> /* isalpha, toupper */
### Solution1

#define MAX_LEN 100


int main(void) {

    char message[MAX_LEN];
    char c, *p = message, *q;

    printf("Enter a message: ");

    while ((c = toupper(getchar())) != '\n' & p < message + MAX_LEN) {
        if (isalpha(c))
            *p++ = c;
    }
    p--;

    for (q = message; q < p; q++, p--) {
        if (*p != *q) {
            printf("Not a palindrome\n");
            return 0;
        }
    }
    printf("Palindrome\n");
    return 0;
}

### Solution2

#define SIZE 30

int main(void) {
    printf("Enter a message: ");
    char my_array[SIZE] = {0};
    
    char *p = my_array;
    
    while ((*p=tolower(getchar()))!='\n' && p<my_array+SIZE){
        if (isalpha(*p)) {
            p++;
        }
    }
    --p;
    
    for (char *q = my_array; p>=my_array && q<my_array+SIZE; p--,q++) {
        if (*q!=*p) {
            printf("Not ");
            break;
        }
    }
    puts("Polidrome");
    return 0;
}

