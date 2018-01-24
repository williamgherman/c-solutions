#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t cur = time(NULL);
    char s[22];

    strftime(s, sizeof(s), "%a, %d %b %y  %H:%M", localtime(&cur));
    printf("%s\n", s);
    return 0;
}
