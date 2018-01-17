#include <stdio.h>
#include <stdlib.h>
#include "readline.h"

#define MAX_TIMES 100
#define MAX_LEN 255

int compare(const void *a, const void *b);

int main(void)
{
    FILE *fp;
    char line[MAX_LEN];
    int i, hour, min, flights, user_time, dep_hr, dep_min, arr_hr, arr_min,
        departures[MAX_TIMES], arrivals[MAX_TIMES];

    if ((fp = fopen("flights.dat", "r")) == NULL)
    {
        fprintf(stderr, "Error: flights.dat cannot be read\n");
        exit(EXIT_FAILURE);
    }

    i = 0;
    while ((read_line(line, MAX_LEN, fp)) != 0)
    {
        sscanf(line, "%d:%d %d:%d", &dep_hr, &dep_min, &arr_hr, &arr_min);
        departures[i] = (dep_hr * 60) + dep_min;
        arrivals[i] = (arr_hr * 60) + arr_min;
        i++;
        if (i == MAX_TIMES)
        {
            fprintf(stderr, "Error: flights.dat too long, using first %d"
                    " listings\n", MAX_TIMES);
            break;
        }
    }
    flights = i;

    qsort(departures, flights, sizeof(int), compare);
    qsort(arrivals, flights, sizeof(int), compare);

    printf("Enter departure time in 24-hour format (HH:mm): ");
    scanf("%d :%d", &hour, &min);
    user_time = (60 * hour) + min;
 
    for (i = 0; i < flights; i++)
    {
        if ((abs(user_time - departures[i])) <=
            (abs(user_time - departures[i+1])))
        {
            break;
        }
    }

    printf("Closest departure time: %.2d:%.2d, arriving at %.2d:%.2d\n",
           departures[i] / 60, departures[i] % 60,
           arrivals[i] / 60, arrivals[i] % 60);
    fclose(fp);

    exit(EXIT_SUCCESS);
}

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}
