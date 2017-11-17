### Exercise 9.04
Write a function `day_of_year(month, day, year)` that returns the day of the
year (an integer between 1 and 366) specified by the three arguments.

### Solution

```c
int day_of_year(int month, int day, int year) {

    int i;

    for (i = 1; i < month; i++) {
        switch(i) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                day += 31;
                break;
            case 4: case 6: case 9: case 11:
                day += 30;
                break;
            case 2:
                if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
                    day += 29;
                else
                    day += 28;
        }
    }
    return day;
}
```
