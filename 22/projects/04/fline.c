#include <stdio.h>
#include <stdlib.h> /* exit */

int main(int argc, char *argv[])
{
    FILE *fp;
    char c;
    unsigned long long int count = 0;

    if (argc != 2)
    {
        fprintf(stderr, "USAGE: fline filename\n");
        exit(EXIT_FAILURE);
    }

    if ((fp = fopen(argv[1], "r")) == NULL)
    {
        fprintf(stderr, "Error: %s cannot be opened\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    while ((c = getc(fp)) != EOF)
    {
        if (c == '\n')
            count++;
    }
    fclose(fp);

    printf("Lines in %s: %llu\n", argv[1], count);
    exit(EXIT_SUCCESS);
}
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
unsigned char line=0;
if((fp=fopen(argv[argc-1],"r"))!=NULL){
while(fgets(str,sizeof(str),fp)!=NULL) line++;
fclose(fp);
printf("lines=%d\n",line);
}
else fprintf(stderr,"cant open %s",argv[argc-1]);
 return 0;
}
