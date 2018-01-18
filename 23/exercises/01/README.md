### Exercise 23.01

Extend the `round_nearest` function so that it rounds a floating-point number
*x* to *n* digits after the decimal point. For example, the call
`round_nearest(3.14159, 3)` would return 3.142. *Hint:* Multiply *x* by
10<sup>*n*</sup>. Be sure that your function works correctly for both positive
and negative values of *x*.

### Solution

```c
double round_nearest(double x, int n)
{
    int power = pow(10, n);
    return x < 0.0 ? ceil(x * power - 0.5) / power : 
                     floor(x * power + 0.5) / power;
}
```
