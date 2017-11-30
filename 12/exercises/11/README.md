### Exercise 12.11
Modify the `find_largest` function so that it uses pointer arithmetic -- not
subscripting -- to visit array elements.

### Solution

```c
int find_largest(int a[], int n) {

    int *p = a;
    int largest = *p++;

    while (p++ < a + n) {
        if (*p > largest) {
            largest = *p;
        }
    }
    return largest;
}
```
