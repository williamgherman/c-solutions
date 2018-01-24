#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t cur = time(NULL);
    struct tm *p;
    char date[9];
    char time[12];

    p = localtime(&cur);
    strftime(date, sizeof(date), "%m/%d/%y", p);
    strftime(time, sizeof(time), "%I:%M:%S %p", p);

    printf("%s  %s\n", date, time[0] == '0' ? &time[1] : time);
    return 0;
}
