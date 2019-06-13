### Exercise 6.08
What output does the following `for` statement produce?

```c
for (i = 10; i >= 1; i /= 2)
    printf("%d ", i++);
```

### Solution

The program will print `10 5 3 2 ` then print an endless stream of `1 `s. The
postfix increment operator in the print statement will always cause the
conditional in the `for` loop to return true.
