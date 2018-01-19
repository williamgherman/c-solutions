#include <stdio.h>
#include <string.h> /* strtok, strlen */

#define MAX_LEN 255

int main(void)
{
    char s[MAX_LEN];
    char *p[MAX_LEN];
    int i = 0;

    printf("Enter a series of words separated by single spaces: ");
    fgets(s, MAX_LEN, stdin);
    s[strlen(s)-1] = '\0';

    if ((p[i] = strtok(s, " ")) == NULL)
        return 0;
    i++;
    while ((p[i] = strtok(NULL, " ")) != NULL)
        i++;
    for (i--; i >=0; i--)
        printf("%s ", p[i]);
    printf("\n");

    return 0;
}
