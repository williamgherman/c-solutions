### Exercise 12.08
Rewrite the following function to use pointer arithmetic instead of array
subscripting. (In other words, eliminate the variable `i` and all uses of the
`[]` operator.) Make as few changes as possible.

```c
void store_zeros(int a[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        a[i] = 0;
}
```

### Solution

```c
void store_zeros(int a[], int n) {

    int *p;

    for (p = a; p < a + n; p++)
        *p = 0;
}
```
