### Exercise 3.05
Suppose that we call `scanf` as follows:

```c
scanf("%f%d%f", &x, &i, &y);
```

If the user enters

```
12.3 45.6 789
```

what will be the values of `x`, `i` and `y` after the call? (Assume that `x` and
`y` are `float` variables and `i` is an `int` variable.)

### Solution
```
x = 12.3
i = 45
y = 0.6
```

`scanf` will read the decimal in `45.6` as the beginning of `y`, enter `0.6`,
and will not enter `789` until the next scan.
