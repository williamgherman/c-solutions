### Exercise 9.14
The following function is supposed to return `true` if any element of the array
`a` has the value 0 and `false` if all elements are nonzero. Sadly, it contains
an error. Find the error and show how to fix it:

```c
bool has_zero(int a[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        if (a[i] == 0)
            return true;
        else
            return false;
}
```

### Solution

The function will always return after checking only the first value of `a`,
which is not how the function should work. It should continue and only return
`false` if every element is nonzero:

```c
bool has_zero(int a[], int n) {

    int i;

    for (i = 0; i < n; i++) {
        if (a[i] == 0) {
            return true;
        }
    }

    return false;
}
```
