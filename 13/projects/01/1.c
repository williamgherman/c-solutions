#include <stdbool.h>   /* C99 only */
#include <stdio.h>
#include <string.h>
#define WORD_SIZE 20
int main(void)
{
    char smallest_word[WORD_SIZE];
    memset(smallest_word,255,sizeof(smallest_word));
    char largest_word[WORD_SIZE];
    memset(largest_word,'\0',sizeof(largest_word));

while(1){
    printf("enter a word:");
    char i=0;
    char my_array[WORD_SIZE];
    while((my_array[i++]=getchar())!='\n');
    my_array[--i]='\0';

    if(strlen(my_array)==4) break;

    if(strcmp(my_array,smallest_word)<0) strcpy(smallest_word,my_array);

    if(strcmp(my_array,largest_word)>0)  strcpy(largest_word,my_array);
}

printf("smallest word=%s\n",smallest_word);
printf("largest word=%s\n",largest_word);

  return 0;

}


//

