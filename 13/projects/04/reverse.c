#include <stdio.h>

int main(int argc, char *argv[]) {

    int i;

    for (i = argc - 1; i > 0; i--)
        printf("%s ", argv[i]);
    printf("\n");
    return 0;
}
