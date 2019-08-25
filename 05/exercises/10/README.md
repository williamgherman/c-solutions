### Exercise 5.10
What output does the following program fragment produce? (Assume that `i` is an
integer variable.)

```c
i = 1;
switch (i % 3) {
    case 0: printf("zero");
    case 1: printf("one");
    case 2: printf("two");
}
```

### Solution
The program will printf `zeroonetwo` if `i % 3` is 0, `onetwo` if `i % 3` is 1,
and `two` if `i % 3` is 2, because of the missing `break` statements. In this
example, `onetwo` will be printed, since `i % 3` is 1.
