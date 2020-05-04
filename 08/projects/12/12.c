#include <stdio.h>

#include <ctype.h>
#define array_size 26


int main(void) {

    char c;

    unsigned int sum=0;

    char array[array_size]={1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};


    printf("Enter a word: ");

    while ((c = toupper(getchar())) != '\n') sum+=array[c-'A'];

    printf("Scrabble value: %d\n", sum);

    return 0;
}
