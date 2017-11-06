### Exercise 2.01
Create and run Kernighan and Ritchie's famous "hello, world" program:
```c
#include <stdio.h>

int main(void)
{
    printf("hello, world\n");
}
```
Do you get a warning message from the compiler? If so, what's needed to make it
go away?

### Solution
Compiling the program produced no errors using gcc version 7.2.0. Here is the
complete output of run commands:
```
$ gcc 1.c -o 1 -Wall -W -pedantic -std=c99
(no output, no warnings or errors)

$ gcc 1.c -o 1 -Wall -W -pedantic -std=c89
1.c: in function 'main':
1.c:5:1: warning: control reaches end of non-void function [-Wreturn-type]
 }
 ^
```
This warning can be fixed by amending `return 0;` to the program (see `1b.c`):
```
$ gcc 1b.c -o 1b -Wall -W -pedantic -std=c89
(no output, no warnings or errors)
```
