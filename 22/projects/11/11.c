#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int month, day, year;
    const char* MONTHS[12] = {"January", "February", "March", "April", 
                              "May", "June", "July", "August", "September", 
                              "October", "November", "December"};

    if (argc != 2)
    {
        fprintf(stderr, "USAGE: %s date; where date is in the form mm-dd-yyyy"
                " or as mm/dd/yyyy\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    sscanf(argv[1], "%d%*[-/]%d%*[-/]%d", &month, &day, &year);
    printf("%s %.2d, %.4d\n", MONTHS[month-1], day, year);

    exit(EXIT_SUCCESS);
}
