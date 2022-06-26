#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

double compute_average_word_length(const char *sentence);
int main(void) {
char sentence[100];
    printf("Enter a sentence: ");
char counter=0;
    while ((sentence[counter++] = getchar()) != '\n');
    sentence[--counter]='\0';

    printf("Average word length: %.1f\n", compute_average_word_length(sentence));

    return 0;

}

double compute_average_word_length(const char *sentence){

char words=0;
char length=0;
for(char *p=sentence;p<=sentence+strlen(sentence);p++) {
    if(*p==' ' || *p=='.') words++;
    else length++;
}
return (double)length/words;
}


//Solution 2
double compute_average_word_length(const char *sentence){
    int words = 1;
    int length = 0;
    while (*sentence) *sentence++==' '?words++:length++;
    return (double)length/words;
    
}
