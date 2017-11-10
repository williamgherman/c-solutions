### Exercise 6.03
What output does the following `for` statement produce?

```c
for (i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1)
    printf("%d ", i);
```

### Solution

`5 4 3 2 `

The program does not print the expected `1 ` because of the misuse of the comma
operator separating the conditional expressions in the for loop: the first
expression `i > 0` is always discarded.
