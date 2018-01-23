### Exercise 26.07

Explain the meaning of the following statement, assuming that `value` is a
variable of type `long int` and `p` is a variable of type `char *`:

```c
value = strtol(p, &p, 10);
```

### Solution

Assign `value` the `long int` value of the string p, in base 10, storing the
following non-consumed character to `p`.
