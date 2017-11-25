### Exercise 11.08
Write the following function:

```c
int *find_largest(int a[], int n);
```

When passed an array `a` of length `n`, the function will return a pointer to
the array's largest element.

### Solution

```c
int *find_largest(int a[], int n) {

    int i, *largest = &a[0];

    for (i = 1; i < n; i++) {
        if (a[i] > *largest)
            largest = &a[i];
    }
    return largest;
}
