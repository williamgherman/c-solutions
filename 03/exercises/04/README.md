### Exercise 3.04
Suppose that we call `scanf` as follows:

```c
scanf("%d%f%d", &i, &x, &j);
```

If the user enters

```
10.3 5 6
```

what will be the values of `i`, `x` and `j` after the call? (Assume that `i` and
`j` are `int` variables and `x` is a `float` variable.)

### Solution
```
i = 10
x = 0.3
j = 5
```

The decimal point will end the input for `i` and begin `x`, and the next input,
5, will be assigned to `j`.
