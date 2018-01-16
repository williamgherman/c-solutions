#include <stdio.h>
#include <stdlib.h> /* exit */
#include "readline.h"

int main(int argc, char *argv[]) {

    FILE *fp;
    char line[255];
    int item, year, month, day;
    float price;

    if (argc != 2)
    {
        fprintf(stderr, "USAGE: %s filename\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    if ((fp = fopen(argv[1], "r")) == NULL)
    {
        fprintf(stderr, "Error: file %s cannot be opened\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n");

    while (read_line(line, 255, fp) != 0)
    {
        sscanf(line, "%d,%f,%d/%d/%d", &item, &price, &month, &day, &year);
        printf("%d\t\t$%8.2f\t%.2d/%.2d/%.4d\n", item, price, month, day, year);
    }

    exit(EXIT_SUCCESS);
}
