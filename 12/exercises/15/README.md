### Exercise 12.15
Write a loop that prints all temperature readings stored in row `i` of the
`temperatures` array (see Exercise 14). Use a pointer to visit each element of
the row.

### Solution

```c
int *p = temperatures[i];
while (p < temperatures[i + 1])
    printf("%d ", *p++);
```
