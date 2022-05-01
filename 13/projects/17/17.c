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

//Solution2
bool is_palindrome(const char *message) {
    const char *q=message;

    while (*q)q++;
    q--;

    while (message < q) if (toupper(*message++) != toupper(*q--)) return false; //no need to check toupper when putting into array in main
    return true;
}
//solution3
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

bool is_palindrome(const char *message);

bool is_palindrome(const char *message){

char temp[strlen(message)+1];

memset(temp,'\0',sizeof(temp));

for(unsigned char i=0,b=0;i<strlen(message);isalpha(message[i])?temp[b++]=toupper(message[i++]):i++);

char *p=temp;
char *q=&temp[strlen(temp)-1];

while(p<q && *p++==*q--);

return !(p-q);
}

#define SIZE 30

int main(void) {
    printf("Enter a message: ");
    char my_array[SIZE] = {0};
    
    char *p = my_array;
    
    while ((*p=getchar())!='\n' && p++<my_array+SIZE);
    *p='\0';
    
printf("array is ");
is_palindrome(my_array)?puts("polidrome"):puts("not polidrome");
    return 0;
}
