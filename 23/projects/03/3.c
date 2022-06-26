#include <stdio.h>
#include <ctype.h>   /* isalpha, isspace, toupper */
#include <stdbool.h> /* C99+ */

int main(void)
{
    char c;
    bool in_word = false;

    while ((c = getchar()) != EOF)
    {
        if (isalpha(c) && !in_word)
        {
            putchar(toupper(c));
            in_word = true;
        }
        else if (isspace(c))
        {
            in_word = false;
            putchar(c);
        }
        else
            putchar(c);
    }

    return 0;
}

#Another solution
int main(int argc,char *argv[])
{

FILE *fp;

if(argc!=2) fprintf(stderr,"wrong parameters");

if(!(fp=fopen(argv[argc-1],"r"))) fprintf(stderr,"cant open %s\n",argv[argc-1]);

char ch;
bool word=false;
if(isalpha(ch=toupper(getc(fp)))) putchar(ch);

while((ch=getc(fp))!=EOF){
if(word && !isspace(ch)) {
    putchar(toupper(ch));
    word=!word;
    continue;
}
if(isspace(ch)) word=!word;
putchar(ch);
}
fclose(fp);
  return 0;
}
