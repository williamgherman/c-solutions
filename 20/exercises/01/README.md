### Exercise 20.01

Show the output produced by each of the following program fragments. Assume that
`i`, `j` and `k` are `unsigned short` variables.

#### (a)

```c
i = 8; j = 9;
printf("%d", i >> 1 + j >> 1);
```

#### (b)

```c
i = 1;
printf("%d", i & ~i);
```

#### (c)

```c
i = 2; j = 1; k = 0;
printf("%d", ~i & j ^ k);
```

#### (d)

```c
i = 7; j = 8; k = 9;
printf("%d", i ^ j & k);
```

### Solution

(a) `0`.  
(b) `0`.  
(c) `0`.  
(d) `15`.
