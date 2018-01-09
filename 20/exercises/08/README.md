### Exercise 20.08

Let `f` be the following function:

```c
unsigned int f(unsigned int i, int m, int n)
{
    return (i >> (m + 1 - n)) & ~(~0 << n);
}
```

(a) What is the value of `~(~0 << n)`?  
(b) What does this function do?

### Solution

#### (a)

`~(~0 << n)` returns a number with its rightmost `n` bits set to 1 and all other
bits set to 0. For example, `~(~0 << 4)` would return 0000 1111.

#### (b)

The function returns a range of `n` bits starting from position `m` in `i`.
