### Exercise 12.07
Write the following function:

```c
bool search(const int a[], int n, int key);
```

`a` is an array to be searched, `n` is the number of elements in the array, and
`key` is the search key. `search` should return `true` if `key` matches some
element of `a`, and `false` if it doesn't. Use pointer arithmetic -- not
subscripting -- to visit array elements.

### Solution

```c
bool search(const int a[], int n, int key) {

    const int *p;

    for (p = a; p < a + n; p++) {
        if (*p == key)
            return true;
    }
    return false;
}
```
