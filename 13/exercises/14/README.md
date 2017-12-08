### Exercise 13.14
What does the following program print?

```c
#include <stdio.h>

int main(void)
{
    char s[] = "Hsjodi", *p;

    for (p = s; *p; p++)
        --*p;
    puts(s);
    return 0;
}
```

### Solution

`Grinch`, followed by a newline.
