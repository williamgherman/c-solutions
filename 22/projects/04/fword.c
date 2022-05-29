#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <strings.h>
#include <stdbool.h>

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

 char ch;
 int word_counter=0;
bool word=false;

 while((ch=getc(file))!=EOF){

 if(!isspace(ch) && isprint(ch)) word=true;

 if(word && (isspace(ch) || iscntrl(ch))) {
    word_counter++;
    word=false;
    }
 }
 fclose(file);
 if(word) word_counter++;

 printf("%d words in %s",word_counter,argv[1]);

 return 0;
}
#another solution
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  FILE *fp;
  if (argc < 2) {
    printf("usage: canopen filename\n");
    exit(EXIT_FAILURE);
  }
char str[100];
unsigned char word=0;
if((fp=fopen(argv[argc-1],"r"))!=NULL){
while(fscanf(fp,"%s",str)!=EOF) word++;
fclose(fp);
}
else fprintf(stderr,"cant open %s",argv[argc-1]);
 return 0;
}
