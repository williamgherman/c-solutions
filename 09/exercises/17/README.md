### Exercise 9.17
Rewrite the `fact` function so that it's no longer recursive.

### Solution

The original `fact` function from Section 9.6:

```c
int fact(int n)
{
    if (n <= 1)
        return 1;
    else 
        return n * fact(n - 1);
}
```

And the iterative `fact` function:

```c
int fact(int n) {

    int result = 1;

    while (n-- > 1)
        result *= n;

    return result;
}
```
