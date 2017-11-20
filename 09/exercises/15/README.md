### Exercise 9.15
The following (rather confusing) function finds the median of three numbers.
Rewrite the function so that it has just one `return` statement.

```c
double median(double x, double y, double z)
{
    if (x <= y)
        if (y <= z) return y;
        else if (x <= z return z;
        else return x;
    if (z <= y) return y;
    if (x <= z) return x;
    return z;
}
```

### Solution

```c
double median(double x, double y, double z) {

    double middle = x;
    if ((x >= y && z <= y) || (z >= y && x <= y))
        middle = y;
    else if ((x >= z && y <= z) || (y >= z && x <= z))
        middle = z;
    return middle;
}
```
