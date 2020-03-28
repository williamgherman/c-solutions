#include <stdio.h>
#include <stdio.h>
#include <ctype.h>
#include <strings.h>

int main (int argc,char *argv[]) {

printf("enter a sentence: ");

char c;

while((c=getchar())!=EOF){
        if(isspace(c)) continue;
else putchar(c);
}

   return(0);
}

