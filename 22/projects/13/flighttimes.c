#include <stdio.h>
#include <stdlib.h>
#include "readline.h"

int main(void)
{
    FILE *fp;
    char *line;
    int dep_hr, dep_min, arr_hr, arr_min;

    if ((fp = fopen("flights.dat", "r")) == NULL)
    {
        fprintf(stderr, "Error: flights.dat cannot be read\n");
        exit(EXIT_FAILURE);
    }
/* TODO: finish */
}
