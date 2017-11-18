### Exercise 9.09
What will be the output of the following program?

```c
#include <stdio.h>

void swap(int a, int b);

int main(void)
{
    int i = 1, j = 2;

    swap(i, j);
    printf("i = %d, j = %d\n", i, j);
    return 0;
}

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
```

### Solution
`i = 1, j = 2`

Although it would appear that the `swap` function will swap the values of `i`
and `j`, the function does not do this. The `swap` function is passed the
*values* of `i` and `j`, assigns them to `a` and `b`, and their values are
discarded, having no side-effects to the variables `i` and `j`. A solution
involving the `&` operator is possible.
