### Exercise 26.08

Write a statement that randomly assigns one of the numbers 7, 11, 15 or 19 to
the variable `n`.

### Solution

```c
r = rand() % 4;
n = r == 0 ? 7 : r == 1 ? 11 : r == 2 ? 15 : 19;
```
