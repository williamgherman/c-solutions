### Exercise 9.01
The following function, which computes the area of a triangle, contains two
errors. Locate the errors and show how to fix them. (*Hint*: There are no errors
in the formula.)

```c
double triangle_area(double base, height)
double product;
{
    product = base * height;
    return product / 2;
}
```

### Solution
The line `double product` should be placed inside the function, and the
function's `height` parameter should have a type `double`.

```c
double triangle_area(double base, double height)
{
    double product;
    product = base * height;
    return product / 2;
}
```
