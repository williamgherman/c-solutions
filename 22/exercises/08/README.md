### Exercise 22.08

In previous chapters, we've used the `scanf` format string `" %c"` when we
wanted to skip white-space characters and read a nonblank character. Some
programmers use `"%1s"` instead. Are the two techniques equivalent? If not, what
are the differences?

### Solution

The two techniques are not equivalent. The format string `"%1s"` will consume a
single character and add a null character at the end of the string, while the
format string `" %c"` will not add any null character, just return the consumed
nonblank character.
