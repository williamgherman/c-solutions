### Exercise 20.13

If `n` is an `unsigned int` variable, what effect does the following statement
have on the bits in `n`?

```c
n &= n - 1;
```

*Hint:* Consider the efect on `n` if this statement is executed more than once.

### Solution

The statement removes the rightmost `1`-bit from `n`. Each time the statement is
executed, `n`'s rightmost bit that is set to 1 is removed.
