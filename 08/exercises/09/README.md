### Exercise 8.09
Using the array of Exercise 8, write a program fragment that computes the
average temperature for a month (averaged over all days of the month and all
hours of the day).

### Solution

```c
#define DAYS 30
#define HOURS 24
int i, j;
double average = 0.0,
       temperature_readings[DAYS][HOURS];

for (i = 0; i < DAYS; i++) {
    for (j = 0; j < HOURS; j++) {
        average += temperature_readings[i][j];
    }
}
average /= DAYS * HOURS;
```
