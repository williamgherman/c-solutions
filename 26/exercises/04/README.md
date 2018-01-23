### Exercise 26.04

Write a function named `display` that taes any number of arguments. The first
argument must be an integer. The remaining arguments will be strings. The first
argument specifies how many strings the call contains. The function will print
the strings on a single line, with adjacent strings separated by one space. For
example, the call

```c
display(4, "Special", "Agent", "Dale", "Cooper");
```

will produce the following output:

```
Special Agent Dale Cooper
```

### Solution

```c
void display(int n, ...)
{
    va_list ap;
    int i;
    char *p;

    va_start(ap, n);

    for (i = 0; i < n; i++)
    {
        p = va_arg(ap, char *);
        while (*p)
        {
            putchar(*p);
            p++;
        }
        if (i < n - 1)
            putchar(' ');
    }
    putchar('\n');
    va_end(ap);
}
```
