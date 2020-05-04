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

 if(!(file=fopen(argv[1],"r"))){
    fprintf(stderr,"cant open %s file",argv[1]);
    exit(EXIT_FAILURE);
 }

 char ch=0;
 while(getc(file)!=EOF) ch++;
 fclose(file);
 printf("%d characters in %s",ch,argv[1]);

 return 0;
}
