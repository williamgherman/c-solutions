#include <stdio.h>

struct date {
    int year;
    int month;
    int day;
};

int day_of_year(struct date d);
int compare_dates(struct date d1, struct date d2);

int main(void) {

    struct date d1, d2;
    int comparison;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d /%d /%d", &d1.month, &d1.day, &d1.year);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d /%d /%d", &d2.month, &d2.day, &d2.year);

    comparison = compare_dates(d1, d2);
    if (comparison > 0)
        printf("%d/%d/%d comes before %d/%d/%d\n",
               d1.month, d1.day, d1.year, d2.month, d2.day, d2.year);
    else if (comparison < 0)
        printf("%d/%d/%d comes before %d/%d/%d\n",
               d2.month, d2.day, d2.year, d1.month, d1.day, d1.year);
    else
        printf("%d/%d/%d and %d/%d/%d are equal\n", 
               d1.month, d1.day, d1.year, d2.month, d2.day, d2.year);
 
    return 0;
}
int day_of_year(struct date d) {
    int res = 0, i;
    const int days_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (d.month > 1 && ((d.year % 4 == 0 && d.year % 100 != 0) 
        || d.year % 400 == 0))
        res++;
    for (i = 0; i < d.month; i++)
        res += days_month[i];
    return res + d.day;
}

int compare_dates(struct date d1, struct date d2) {
    int d1day = day_of_year(d1);
    int d2day = day_of_year(d2);
    if (d1day > d2day)
        return -1;
    else if (d1day < d2day)
        return 1;
    else
        return 0;
}
