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

///Solution 2
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
    
    char my_array[30][20] = {0};
    
    printf("Enter a sentence: ");
    char letter=0;
    char rows = 0;
    char cols = 0;
    char endrow=0;
    while((letter=getchar())!='\n' && rows < 30 && cols < 20) {
        if (isspace(letter)) {
            my_array[rows++][cols] = '\0';
            cols = 0;
            continue;
        }
        my_array[rows][cols++] = letter;
    }
    
    
    endrow = rows;
    char endmark = 0;
    while (rows >= 0) {
        if (rows == endrow && ispunct(my_array[rows][strlen(my_array[rows])-1])) {
            endmark = my_array[rows][strlen(my_array[rows])-1];
            my_array[rows][strlen(my_array[rows])-1] = '\0';
            
        }
        printf(!rows?"%s":"%s ",my_array[rows--]);
        
    }
    printf("%c\n",endmark);
    
    
    return 0;
}

