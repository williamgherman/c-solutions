### Exercise 20.15

(a) Assume that the variable `s` has been declared as follows:

```c
struct {
    int flag: 1;
} s;
```

With some compilers, executing the following statements causes `1` to be
displayed, but with other compilers, the output is -1. Explain the reason for
this behavior.

```c
s.flag = 1;
printf("%d\n", s.flag);
```

(b) How can this problem be avoided?

### Solution

#### (a)

Because `int` is not necessarily a `signed` or `unsigned int`, a compiler may
attribute the `flag` value 1 as a sign bit, producing 1 or -1 accordingly.

#### (b)

To fix this issue, one needs to add a type specifier (`signed` or `unsigned`) to
avoid this ambiguity:

```c
struct {
    unsigned int flag: 1;
} s;
```
