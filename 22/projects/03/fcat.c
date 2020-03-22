#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <strings.h>

int main(int argc, char *argv[])
{
  if(argc<2){
    fprintf(stderr,"Too few arguments provided");
    exit(EXIT_FAILURE);
  }

  FILE *file;

unsigned char file_counter=0;

  while(file_counter<argc){
    if(!(file=fopen(argv[file_counter],"r"))) {
        fprintf(stderr,"cant open %s\n",argv[file_counter]);
       fclose(file);
    }
    else {
    char ch;
    while((ch=getc(file))!=EOF) putchar(ch);
    putchar('\n');
    fclose(file);
  }
  file_counter++;
  }
 return 0;
}
