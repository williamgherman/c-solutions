### Exercise 17.16

Write the following function. The call `sum(g, i, j)` should return `g(i) +` ...
`+ g(j)`.

```c
int sum(int (*f)(int), int start, int end);
```

### Solution

```c
int sum(int (*f)(int), int start, int end) {
    int result = 0;
    while (start <= end) {
        result += (*f)(start);
        start++;
    }
    return result;
}
```
