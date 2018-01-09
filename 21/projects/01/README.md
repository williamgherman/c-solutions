### Project 21.01

Write a program that declares the `s` structure (see Section 21.4) and prints
the sized and offsets of the `a`, `b` and `c` members (Use `sizeof` to find
sizes; use `offsetof` to find offsets). Have the program print the size of the
entire structure as well. From this information, determine whether or not the
structure has any holes. If it does, describe the location and size of each.

### Solution

See `1.c`.

On my machine, the output produced by the resulting program is:

```
Size of struct s: 16
Size and offset of member a: 1 -- 0
Size and offset of member b: 8 -- 4
Size and offset of member c: 4 -- 12
```

Without holes, the offset of member `b` should be `1`, because a `char`'s size
is `1`. Therefore, there is a hole of size 3 between member `a` and `b`.
