### Exercise 17.03

Write the following function:

```c
int *create_array(int n, int initial_value);
```

The function should return a pointer to a dynamically allocated `int` array with
`n` members, each of which is initialized to `initial_value`. The return value
should be `NULL` if the array can't be allocated.

### Solution

```c
int *create_array(int n, int initial_value) {
    int *a, *p;
    if ((a = (int *) malloc(n * sizeof(int)) == NULL) {
        printf("Error: malloc failed\n");
        return NULL;
    }
    for (p = a; p < a + n; p++)
        *p = initial_value;
    return a;
}
```
