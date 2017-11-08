### Exercise 4.14
Supply parentheses to show how a C compiler would interpret each of the
following expressions.

```
(a) a * b - c * d + e
(b) a / b % c / d
(c) - a - b + c - + d
(d) a * - b / c - d
```

### Solution

```
(a) (((a * b) - (c * d)) + e)
(b) (((a / b) % c) / d)
(c) ((((- a) - b) + c) - (+ d))
(d) (((a * (- b)) / c) - d)
```
