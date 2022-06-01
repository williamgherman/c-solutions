#include <stdio.h>
#include <stdio.h>
#include <ctype.h>
#include <strings.h>

int main (int argc,char *argv[]) {

printf("enter a sentence: ");

char c;

while((c=getchar())!=EOF){
        if(isspace(c)) continue;
        putchar(c);
}

   return(0);
}

### another solution
int main(int argc,char *argv[])
{

FILE *fp;

if(argc!=2) fprintf(stderr,"file not provided or more arguments");

if(!(fp=fopen(argv[argc-1],"r"))) fprintf(stderr,"cant open file %s",argv[argc-1]);

char str[100]={0};
unsigned char counter=0;

while(fgets(str,sizeof(str),fp)){

while(isspace(str[counter])) counter++;

while(putchar(str[counter]) && counter++<strlen(str));
counter=0;
}

fclose(fp);
  return 0;
}
