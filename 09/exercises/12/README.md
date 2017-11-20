### Exercise 9.12
Write the following function:

```c
double inner_product(double a[], double b[], int n);
```

The function should return `a[0] * b[0] + a[1] * b[1] + ` ... `+ a[n-1] *
b[n-1]`.

### Solution

```c
double inner_product(double a[], double b[], int n) {

    int i;
    double result;

    for (i = 0; i < n; i++)
        result += (a[i] * b[i]);

    return result;
}
```
