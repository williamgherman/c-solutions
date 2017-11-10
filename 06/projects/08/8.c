#include <stdio.h>

int main(void) {

    int n, day, weekday, i;

    printf("Enter number of days in month: ");
    scanf("%d", &n);
    printf("Enter starting day of the week (1=Mon, 7=Sun): ");
    scanf("%d", &weekday);

    printf("\n Mo Tu We Th Fr Sa Su\n");

    for (i = 1, day = 1; i <= n + weekday - 1; i++) {
        if (i < weekday)
            printf("   ");
        else
            printf("%3d", day++);
        if (i % 7 == 0)
            printf("\n");
    }

    printf("\n");
    return 0;
}
