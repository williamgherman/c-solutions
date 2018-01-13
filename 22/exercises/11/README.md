### Exercise 22.11

The following loop appears in the `fcopy.c` program:

```c
while ((ch = getc(source_fp)) != EOF)
  putc(ch, dest_fp);
```

Suppose that we neglected to put parentheses around `ch = getc(source_fp)`:

```c
while (ch = getc(source_fp) != EOF)
  putc(ch, dest_fp);
```

Would the program compile without an error? If so, what would the program do
when it's run?

### Solution

The program would compile, but since the relational NOT operator `!=` has
precedence over the assignment operator `=`, the program would always assign the
value `1` to `ch`, and the call of `putc` would never put the correct characters
to the file pointed to by `dest_fp`.
