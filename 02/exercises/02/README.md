### Exercise 2.02
Consider the following program:
```c
#include <stdio.h>

int main(void)
{
    printf("Parkinson's Law:\nWork expands so as to ");
    printf("fill the time\n");
    printf("available for its completion.\n");
    return 0;
}
```
(a) Identify the directives and statements in this program.  
(b) What output does the program produce?

### Solution
#### (a)
The only directive in the program is `#include <stdio.h>` in line 1. The
statements are the lines 5-8: the `printf()` statements and the `return`
statement.

#### (b)
The program produces the following:
```
Parkinson's Law:
Work expands so as to fill the time
available for its completion.

```
