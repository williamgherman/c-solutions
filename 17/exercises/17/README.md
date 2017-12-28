### Exercise 17.17

Let `a` be an array of 100 integers. Write a call of `qsort` that sorts only the
*last* 50 elements in `a` (You don't need to write the comparison function).

### Solution

```c
qsort(&a[50], 50, sizeof(a[0]), compare);
```

NB: Assuming `compare` is the name of the comparison function.
