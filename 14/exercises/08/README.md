### Exercise 14.08

Suppose we want a macro that expands into a string containing the current line
number and file name. In other words, we'd like to write

```c
const char *str = LINE_FILE;
```

and have it expand into

```c
const char *str = "Line 10 of file foo.c";
```

where `foo.c` is the file containing the program and 10 is the line on which the
invocation of `LINE_FILE` appears. *Warning:* This exercise is for experts only.
Be sure to read the Q&A section carefully before attempting!

### Solution

```c
#define STRINGIZE(x) #x
#define EXPAND_MACRO(x) STRINGIZE(x)
#define LINE_FILE ("Line " EXPAND_MACRO(__LINE__) " of file " __FILE__)
```

NB: The first two macros are neceessary to receive the value of the macro
`__LINE__`, convert it into a string and then concat it to the `LINE_FILE`
macro. Without `EXPAND_MACRO`, `#__LINE__` would expand to the string
`"__LINE__"` and not its numeric value.
