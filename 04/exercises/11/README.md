### Exercise 4.11
Show the output produced by each of the following program fragments. Assume that
`i`, `j`, and `k` are `int` variables.

```
(a) i = 1;
    printf("%d ", i++ - 1);
    printf("%d", i);
(b) i = 10; j = 5;
    printf("%d ", i++ - ++j);
    printf("%d %d", i, j);
(c) i = 7; j = 8;
    printf("%d ", i++ - --j);
    printf("%d %d", i, j);
(d) i = 3; j = 4; k = 5;
    printf("%d ", i++ - j++ + --k);
    printf("%d %d %d", i, j, k);
```

### Solution

(a) 0 2  
(b) 4 11 6  
(c) 0 8 7  
(d) 3 4 5 4
