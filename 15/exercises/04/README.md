### Exercise 15.04

Assume that `debug.h` is a header file with the following contents:

```c
#ifdef DEBUG
#define PRINT_DEBUG(n) printf("Value of " #n ": %d\n", n)
#else
#define PRINT_DEBUG(n)
#endif
```

Let `testdebug.c` be the following source file:

```c
#include <stdio.h>

#define DEBUG
#include "debug.h"

int main(void)
{
    int i = 1, j = 2, k = 3;

#ifdef DEBUG
    printf("Output if DEBUG is defined:\n");
#else
    printf("Output if DEBUG is not defined:\n");
#endif

    PRINT_DEBUG(i);
    PRINT_DEBUG(j);
    PRINT_DEBUG(k);
    PRINT_DEBUG(i + j);
    PRINT_DEBUG(2 * i + j - k);

    return 0;
}
```

(a) What is the output when the program is executed?  
(b) What is the output if the `#define` directive is removed from `testdebug.c`?  
(c) Explain why the output is different in parts (a) and (b).  
(d) Is it necessary for the `DEBUG` macro to be defined *before* `debug.h` is
included in order for `PRINT_DEBUG` to have the desired effect? Justify your
answer.

### Solution

#### (a)

```
Output if DEBUG is defined:
Value of i: 1
Value of j: 2
Value of k: 3
Value of i + j: 3
Value of 2 * i + j - k: 1
```

#### (b)

```
Output if DEBUG is not defined:
```

#### (c)

Because the `DEBUG` macro was left undefined while `debug.h` was added to
`testdebug.c`, the `PRINT_DEBUG` macro was defined as a macro with no effect,
and the preprocessor conditional statements also relied on the definition of
`DEBUG`.

#### (d)

Yes. The `PRINT_DEBUG` macro's definition relies on the definition of `DEBUG`.
If `DEBUG` is defined after `PRINT_DEBUG` is defined, it will have no effect on
the definition of `PRINT_DEBUG`.
