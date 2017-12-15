### Exercise 14.02

Write a macro `NELEMS(a)` that computes the number of elements in a
one-dimensional array `a`. *Hint:* See the discussion of the `sizeof` operator
in Section 8.1

### Solution

```c
#define NELEMS(a) (sizeof(a) / sizeof(a[0]))
```
