### Exercise 11.04
Write the following function:

```c
void swap(int *p, int *q);
```

When passed the addresses of two variables, `swap` should exchange the values of
the variables:

```c
swap(&i, &j);    /* exchanges values of i and j */
```

### Solution

```c
void swap(int *p, int *q) {

    int temp = *q;
    *q = *p;
    *p = temp;
}
```
