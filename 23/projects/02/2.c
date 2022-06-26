#include <stdio.h>
#include <stdio.h>
#include <ctype.h>
#include <strings.h>

int main (int argc,char *argv[]) {

if(argc<2) printf("less arguments than expected");

FILE *file=fopen(argv[1],"r");

if(!file) printf("something went wrong with the file");

char input[strlen(argv[1])+1];

memset(input,'\0',sizeof(input));

while(fgets(input,sizeof(input),file)) {

    unsigned char counter=0;

    while(isspace(input[counter])) counter++;

    for(;counter<strlen(input);putchar(input[counter++]));

}

   return(0);}
