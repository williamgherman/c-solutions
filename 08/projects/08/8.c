#include <stdio.h>

int main(void) {

    int i, j, temp_total, high, low;
    int n[5][5];

    for (i = 0; i < 5; i++) {
        printf("Enter quiz grades for student %d: ", i + 1);

        for (j = 0; j < 5; j++) {
            scanf("%d", &n[i][j]);
        }
    }

    printf("\n");

    for (i = 0; i < 5; i++) {
        printf("\nTotal and average score for student %d: ", i + 1);
        temp_total = 0;
        for (j = 0; j < 5; j++) {
            temp_total += n[i][j];
        }
        printf("%d %.2f", temp_total, (double) temp_total / 5);
    }

    printf("\n");

    for (i = 0; i < 5; i++) {
        printf("\nAverage, high and low scores for quiz %d: ", i + 1);
        temp_total = 0;
        high = low = n[0][i];

        for (j = 0; j < 5; j++) {
            temp_total += n[j][i];
            if (n[j][i] > high)
                high = n[j][i];
            if (n[j][i] < low)
                low = n[j][i];
        }
        printf("%f %d %d", (double) temp_total / 5, high, low);
    }

    printf("\n");


    return 0;
}
