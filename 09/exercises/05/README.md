### Exercise 9.05
Write a function `num_digits(n)` that returns the number of digits in `n` (a
positive integer). *Hint*: To determine the number of digits in a number *n*,
divide it by 10 repeatedly. When *n* reaches 0, the number of divisions
indicates how many digits *n* originally had.

### Solution

```c
int num_digits(int n) {
    int i = 0;
    while (n > 0) {
        n /= 10;
        i++;
    }
    return i;
}
```
