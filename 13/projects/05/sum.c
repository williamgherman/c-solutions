#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int i, sum = 0;
    for (i = 1; i < argc; i++)
        sum += atoi(argv[i]);
    printf("Total: %d\n", sum);
    return 0;
}

/// and with pointer
int main(int argc, char *argv[])
{
    char **p;
    int sum=0;
    for (p=&argv[argc-1]; p!=argv; p--) {
        sum+=atoi(*p);
    }
    printf("Total: %d\n",sum);
  
  return 0;
}
