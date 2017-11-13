/* Prints a table of squares using a for statement */

#include <stdio.h>

int main(void) {

    int i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);
    getchar(); /* ungets '\n' from buffer */

    for (i = 1; i <= n; i++) {

        printf("%10d%10d\n", i, i * i);
        if (i % 24 == 0) {
            printf("Press Enter to continue...");
            while (getchar() != '\n')
                ;
        }
    }    


    return 0;
}
