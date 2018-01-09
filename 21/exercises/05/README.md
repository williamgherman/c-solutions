### Exercise 21.05

The `islower` function, which belongs to the `<ctype.h>` header, tests whether a
character is a lower-case letter. Why would the following macro version of
`islower` not be legal, according to the C standard (You may assume that the
character set is ASCII)?

```c
#define islower(c) ((c) >= 'a' && (c) <= 'z')
```

### Solution

Parameterized macro definitions substituting for library functions must, under
the C standard, be fully protected by parentheses and evaluate its arguments
exactly once. The above-defined `islower` macro evaluates `c` twice, which may
lead to side effects unintended by the `islower` function/macro. 
