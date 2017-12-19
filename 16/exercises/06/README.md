### Exercise 16.06

Write the following function, assuming that the `time` structure contains three
members: `hours`, `minutes` and `seconds` (all of type `int`).

```c
struct time split_time(long total_seconds);
```

`total_seconds` is a time represented as the number of seconds since midnight.
The function returns a structure containing the equivalent time in hours (0-23),
minutes (0-59) and seconds (0-59).

### Solution

```c
struct time split_time(long total_seconds) {

    struct time t;
    t.hours = total_seconds / 3600;
    total_seconds %= 3600;
    t.minutes = total_seconds / 60;
    total_seconds %= 60;
    t.seconds = total_seconds;
    return t;
}
```
