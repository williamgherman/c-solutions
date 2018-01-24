#include <stdio.h>
#include <stdlib.h> /* rand, srand */

int main(void)
{
    int i;
    for (i = 0; i < 1000; i++)
        printf("%d", rand() & 1);
    printf("\n");
    return 0;
}
