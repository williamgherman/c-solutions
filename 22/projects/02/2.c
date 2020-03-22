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

  if(!(file=fopen(argv[1],"r"))) {
    fprintf(stderr,"cant open %s\n",argv[1]);
    exit(EXIT_FAILURE);
  }

  char ch;
  while((ch=getc(file))!=EOF) putchar(toupper(ch));
  fclose(file);
 return 0;
}
