### Exercise 9.03
Write a function `gcd(m, n)` that calculates the greatest common divisor of the
integers `m` and `n`. (Programming Project 2 in Chapter 6 describes Euclid's
algorithm for computing the GCD.)

### Solution

```c
int gcd(int m, int n) {

    int r;
    while (n > 0) {
        r = m % n;
        m = n;
        n = r;
    }

    return m;
}
```
