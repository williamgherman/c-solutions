#include <stdio.h>

#include <ctype.h> /* isalpha, toupper */

#define MAX_LEN 100

int main(void) {

printf("Enter a date (mm/dd/yyyy): ");
int month;
int day;
int year;
scanf("%d/%d/%d",&month,&day,&year);

char *month_names[]={"January","Fabruary","March","April","May","June","July","August","September"\
,"October","November","December"};

printf("You entered the date %s %.2d, %.4d\n",month_names[month-1],day,year);
            return 0;

    }

