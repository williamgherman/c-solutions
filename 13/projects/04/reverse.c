#include <stdio.h>

int main(int argc, char *argv[]) {

    int i;

    for (i = argc - 1; i > 0; i--)
        printf("%s ", argv[i]);
    printf("\n");
    return 0;
}

///And with pointer

int main(int argc, char *argv[])
{
    char **p;
    for (p=&argv[argc-1]; p!=argv; p--) {
        printf("%s ",*p);
    }
    putchar('\n');
  
  return 0;
}

