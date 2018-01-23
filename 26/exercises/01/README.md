### Exercise 26.01

Rewrite the `max_int` function so that, instead of passing the number of
integers as the first argument, we must supple 0 as the last argument. *Hint:*
`max_int` must have at least one "normal" parameter, so you can't remove the
parameter `n`. Instead, assume that it represents one of the numbers to be
compared.

### Solution

```c
int max_int(int n, ...)
{
    va_list ap;
    int i, current, largest;

    va_start(ap, n);
    largest = n;

    while ((current = va_arg(ap, int)) != 0)
        if (current > largest)
            largest = current;
    va_end(ap);
    return largest;
}
```
