### Exercise 6.14
Find the error in the following program fragment and fix it.

```c
if (n % 2 == 0);
    printf("n is even\n");
```

### Solution

```c
if (n % 2 == 0)            /* removed semicolon */
    printf("n is even\n");
```
