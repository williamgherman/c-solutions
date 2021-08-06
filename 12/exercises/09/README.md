### Exercise 12.09
Write the following function:

```c
double inner_product(const double *a, const double *b, int n);
```

`a` and `b` both point to arrays of length `n`. The function should return
`a[0] * b[0] + a[1] * b[1] +` ... `+ a[n-1] * b[n-1]`. Use pointer arithmetic --
not subscripting -- to visit array elements.

### Solution

```c
double inner_product(const double *a, const double *b, int n) {

    double sum;
    int i = 0

    while (i++ < n)
        sum += *a++ * *b++;
}
```
### Solution 2
```c
double inner_product(const double *a, const double *b, int n){
    double sum = 0;
    for (const double *p = a, *q = b; p < a+n && q < a+n; sum+=*p++**q++);
    return sum;
}
```
