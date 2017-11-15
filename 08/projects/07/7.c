#include <stdio.h>

int main(void) {

    int i, j, temp_total;
    int n[5][5];

    for (i = 0; i < 5; i++) {
        printf("Enter row %d: ", i + 1);

        for (j = 0; j < 5; j++) {
            scanf("%d", &n[i][j]);
        }
    }

    printf("Row totals: ");

    for (i = 0; i < 5; i++) {
        temp_total = 0;
        for (j = 0; j < 5; j++) {
            temp_total += n[i][j];
        }
        printf("%d ", temp_total);
    }

    printf("\nColumn totals: ");
    for (i = 0; i < 5; i++) {
        temp_total = 0;
        for (j = 0; j < 5; j++) {
            temp_total += n[j][i];
        }
        printf("%d ", temp_total);
    }

    printf("\n");

    return 0;
}
