### Exercise 17.15

Show the output of the following program and explain what it does.

```c
#include <stdio.h>

int f1(int (*f)(int));
int f2(int i);

int main(void)
{
    printf("Answer: %d\n", f1(f2));
    return 0;
}

int f1(int (*f)(int))
{
    int n = 0;

    while ((*f)(n)) n++;
    return n;
}

int f2(int i)
{
    return i * i + i - 12;
}
```

### Solution

`f1(f2)` calls `f(n)` from `n = 0` to `n = 3` (where `f2` returns `0`). `f1`
then returns `3`, and the `printf` call prints `Answer: 3`.
