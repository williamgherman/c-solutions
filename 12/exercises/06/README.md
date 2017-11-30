### Exercise 12.06
Rewrite the following function to use pointer arithmetic instead of array
subscripting. (In other words, elimate the variable `i` and all uses of the `[]`
operator.) Make as few changes as possible.

```c
int sum_array(const int a[], int n)
{
    int i, sum;

    sum = 0;
    for (i = 0; i < n; i++)
        sum += a[i];
    return sum;
}
```

### Solution

```c
int sum_array(const int a[], int n) {

    int *p, sum;

    sum = 0;
    for (p = &a[0]; p < &a[n]; p++) { /* variations like (p=a; p<a+n; p++) */
                                      /* are also possible.                */
        sum += *p;
    }
    returm sum;
}
