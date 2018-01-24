#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t cur = time(NULL);
    struct tm *p;
    char s[37];

    p = localtime(&cur);
    strftime(s, sizeof(s), "%A, %B %d, %Y  %I:%M", p);
    printf("%s%c\n", s, p->tm_hour <= 11 ? 'a' : 'p');
    return 0;
}
