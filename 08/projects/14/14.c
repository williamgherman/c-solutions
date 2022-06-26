###Solution1

#include <stdbool.h>   /* C99 only */
#include <stdio.h>


#define size 150

char array[size];



int main(void)

{
    printf("Enter a sentence: ");
   for(unsigned char i=0;i<size;i++) array[i]=0;
     char i=0;
     char start=0;
     char finish=0;
     char end_char=0;

    while((array[i]=getchar())!='\n')i++;
    i--;

    for(unsigned char counter=0;counter<=i;counter++){
        if(array[counter]=='?' || array[counter]=='.' || array[counter]=='!') {
                end_char=array[counter];
        i--;
        }
    }

printf("text reversed is: ");

while(i>=0){

for(start=0,finish=i;start<=finish && array[i]!=' ';start++,i--);

for(unsigned char z=0;z<=start;z++) putchar(array[i+z]);

i--;
}

if(end_char) putchar(end_char);

  return 0;
}

###Solution2

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SIZE 50
int main(void) {

    char c = 0;
    char my_array[SIZE] = {0};
    
    printf("Enter a Sentence: ");
    unsigned short counter = 0;
    
    while ((c=getchar()) != '\n') my_array[counter++] = c;
    
    char start=0;
    char endmark = ispunct(my_array[strlen(my_array)-1])?my_array[strlen(my_array)-1]:0;
    
    printf("There reverse is: ");
    for (char i = strlen(my_array)-1; i>=0; i--) {
        
        if (isspace(my_array[i]) || !i) {
            start = !i ? i : i+1;
            while (!isspace(my_array[start]) && my_array[start]!='\0' && !ispunct(my_array[start])) putchar(my_array[start++]);
            putchar(!i ? i :' ');
        }
    }
    
    putchar(endmark);
    putchar('\n');
    
    return 0;
}

###Solution 3
#include <stdio.h>
#include <ctype.h>

#define SIZE 100
#define SIZE_OF(x) (unsigned short)(sizeof(x)/sizeof(x[0]))
int main(void) {


   char my_array[SIZE]={0};
   short i=0;
   printf("Enter a sentence: ");
   while((my_array[i]=getchar())!='.' &&\
   my_array[i]!='?' && my_array[i]!='!')i++;

   printf("Reversal of a sentence:");
   char term=my_array[i--];
   char tmp;
   for(short b=i;i>=0;i--){
        if(my_array[i]==' ' || !i){
        tmp=i;
           if(!i) while(my_array[i]!=' ') putchar(my_array[i++]);
           else while(i<=b) putchar(my_array[i++]);
        i=b=tmp;
        }
   }
   printf("%c\n",term);
   return 0;
}
