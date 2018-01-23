### Exercise 26.06

Write the following function:

```c
char *max_pair(int num_pairs, ...);
```

The arguments of `max_pair` are assumed to be "pairs" of integers and strings:
the value of `num_pairs` indicates how many pairs will follow (A pair consists
of an `int` argument followed by a `char *` argument). The function searches the
integers to find the largest one; it then returns the string argument that
follows it. Consider the following call:

```c
max_pair(5, 180, "Seinfeld", 180, "I Love Lucy",
            39, "The Honeymooners", 210, "All in the Family",
            86, "The Sopranos")
```

The largest `int` argument is 210, so the function returns `"All in the
Family"`, which follows it in the argument list.

### Solution

```c
char *max_pair(int num_pairs, ...)
{
    va_list ap, aq;
    int i, current, largest_i, largest;
    char *s;

    va_start(ap, num_pairs);
    largest = va_arg(ap, int);
    largest_i = 0;
    va_arg(ap, char *);

    for (i = 1; i < num_pairs; i++)
    {
        if ((current = va_arg(ap, int)) > largest)
        {
            largest = current;
            largest_i = i;
        }
        va_arg(ap, char *);
    }
    va_end(ap);
    va_start(ap, num_pairs);

    for (i = 0; i < largest_i; i++)
    {
        va_arg(ap, int);
        va_arg(ap, char *);
    }
    va_arg(ap, int);
    s = va_arg(ap, char *);
    va_end(ap);
    return s;
}
```
