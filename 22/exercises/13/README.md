### Exercise 22.13

Write the following function:

```c
int line_length(const char *filename, int n);
```

The function should return the length of line `n` in the text file whose name is
`filename` (assuming that the first line in the file is line 1). If the line
doesn't exist, the function should return 0.

### Solution

```c
int line_length(const char *filename, int n)
{
    FILE *fp;
    char c;
    int len = 0;

    if ((fp = fopen(filename, "r")) == NULL)
        return 0;
    while (n > 1)
    {
        while ((c = fgetc(fp)) != '\n')
            if (c = EOF)
                return 0;
        n--;
    }
    while ((c = fgetc(fp)) != '\n' && c != EOF)
        len++;
    return len;
}

another solution

int line_length(const char *filename, int n){

FILE *fp;
int length=0;
char c;

if((fp=fopen(filename,"r"))){
--n;
while((c=getc(fp))!=EOF){
if(c=='\n') n--;
if(!n && c!='\n') length++;
}
fclose(fp);
}

else fprintf(stderr,"cant open file error:%d\n",errno);
return length;
}

int main(void) {

printf("line length = %d\n",line_length("filname.txt",1));
    return 0;
}

```
