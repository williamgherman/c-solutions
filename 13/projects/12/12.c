#include <stdbool.h>   /* C99 only */

#include <stdio.h>

#define size 150
#define word_size 20
#define row_size 30

char array[row_size][word_size+1];

int main(void)

{
    printf("Enter a sentence: ");

char c=0;
char b=0;
char terminator=0;
    while((array[c][b]=getchar())!='\n' && c<=row_size){
            if(array[c][b]==' ' ) {
                    array[c][b]='\0';
                c++;
                b=0;
            }
            else if(array[c][b]=='?') terminator=array[c][b];
    else b++;
    }
    array[c][b]='\0';

   while(c>=0) printf("%s ",array[c--]);
   putchar(terminator);

  return 0;

}
