### Project 11.01
Modify Programming Project 7 from Chapter 2 so that it includes the following
function:

```c
void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);
```

The function determines the smallest number of $20, $10, $5 and $1 bills
necessary to pay the amount represented by the `dollars` parameter. The
`twenties` parameter points to a variable in which the function will store the
number of $20 bills required. The `tens`, `fives` and `ones` parameters are
similar.

### Solution
See `1.c`.
