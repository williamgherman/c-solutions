### Exercise 12.16
Write a loop that prints the highest temperature in the `temperatures` array
(see Exercise 14) for each day of the week. The loop body should call the
`find_largest` function, passing it one row of the array at a time.

### Solution

```c
int i;
for (i = 0; i < 7; i++)
    printf("Day %d: %d\n", i + 1, find_largest(temperatures[i], 24));
```
