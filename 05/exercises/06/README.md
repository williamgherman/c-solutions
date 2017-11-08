### Exercise 5.06
Is the following `if` statement legal?

```c
if (n == 1-10)
    printf("n is between 1 and 10\n");
```

If so, what does it do when `n` is equal to 5?

### Solution
The statement is legal, but confusing. When `n` is equal to anything besides -9,
the expression returns 0 (a false value), and the `printf` statement is never
run. This is because the `1-10` expression is run first, yielding -9. 
