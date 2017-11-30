### Exercise 12.10
Modify the `find_middle` function of Section 11.5 so that it uses pointer
arithmetic to calculate the return value.

### Solution

```c
int *find_middle(int a[], int n) {

    return a + n / 2;
}
```
