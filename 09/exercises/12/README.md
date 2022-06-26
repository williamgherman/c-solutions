### Exercise 9.12
Write the following function:

```c
double inner_product(double a[], double b[], int n);
```

The function should return `a[0] * b[0] + a[1] * b[1] + ` ... `+ a[n-1] *
b[n-1]`.

### Solution

```c
###Solution1
double inner_product(double a[], double b[], int n){
double sum=0;

for(int i=0;i<n;i++) sum+=a[i]*b[i];

return sum;
}

###Solution2
double inner_product(double a[],double b[],int n){
    double sum=0;
    while (n--) sum+=a[n] * b[n];
    return sum;

}
```
