### Exercise 11.05
Write the following function

```c
void split_time(long total_sec, int *hr, int *min, int *sec);
```

`total_sec` is a time represented as the number of seconds since midnight. `hr`,
`min` and `sec` are pointers to variables in which the function will store the
equivalent time in hours (0-23), minutes (0-59) and seconds (0-59),
respectively.

### Solution

```c
void split_time(long total_sec, int *hr, int *min, int *sec) {

    *hr = total_sec / 3600;
    total_sec -= *hr * 3600;
    *min = total_sec / 60;
    total_sec -= *min * 60;
    *sec = total_sec;
}
```
