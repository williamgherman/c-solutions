### Exercise 12.14
Assume that the following array contains a week's worth of hourly temperature
readings, with each row containing the readings for one day:

```c
int temperatures[7][24];
```

Write a statement that uses the `search` function (see Exercise 7) to search the
entire `temperatures` array for the value 32.

### Solution

```c
bool has32 = search(temperatures, 7 * 24, 32);
```
