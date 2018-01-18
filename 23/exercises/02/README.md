### Exercise 23.02

(C99) Write the following function:

```c
double evaluate_polynomial(double a[], int n, double x);
```

The function should return the value of the polynomial
*a*<sub>*n*</sub>*x*<sup>*n*</sup> + *a*<sub>*n*-1</sub>*x*<sup>*n*-1</sup> +
... + *a*<sub>0</sub>, where the *a*<sub>*i*</sub>'s are stored in corresponding
elements of the array `a`, which has length `n + 1`. Have the function use
Horner's Rule to compute the value of the polynomial:

((...((*a*<sub>*n*</sub>*x* + *a*<sub>*n*-1</sub>)*x* + *a*<sub>*n*-2)*x* +
...)*x* + *a*<sub>1</sub>)*x* + *a*<sub>0</sub>

Use the `fma` function to perform the multiplications and additions.

### Solution

```c
double evaluate_polynomial(double a[], int n, double x)
{
    int i = n;
    double sum = fma(a[i], x, a[i--]);
    while (i >= 0)
    {
        sum += fma(sum, x, a[i--]);
    }
    return sum;
}
```
