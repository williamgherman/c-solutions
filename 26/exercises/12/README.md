### Exercise 26.12

Write a function that, when passed a year, returns a `time_t` value representing
12:00 a.m. on the first day of that year.

### Solution

```c
time_t get_midnight(int year)
{
    time_t t;
    if (year < 1900)
        return 0; /* not valid input */
    t.tm_year = year - 1900;
    t.tm_mon = 0;
    t.tm_mday = 1;
    t.tm_hour = 0;
    t.tm_min = 0;
    t.tm_sec = 0;

    return t;
}
```
