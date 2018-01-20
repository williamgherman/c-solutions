#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(void)
{
    char *clocale = setlocale(LC_ALL, NULL);
    char *locale = setlocale(LC_ALL, "");
    if (strcmp(clocale, locale) == 0)
        printf("Current locale is same as C locale\n");
    else
        printf("Current locale differs from C locale\n");
    return 0;
}
