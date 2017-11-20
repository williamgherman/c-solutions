### Exercise 9.16
Condense the `fact` function in the same way we condensed `power`.

### Solution

Here is the `fact` function as written in Section 9.6:

```c
int fact(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * fact(n - 1);
}
```

And the condensed result:

```c
int fact(int n) {
    return n <= 1 ? 1 : n * fact(n - 1);
}
```
