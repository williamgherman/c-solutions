### Exercise 14.16

(C99) Assume that the following macro definitions are in effect:

```c
#define IDENT(x) PRAGMA(ident #x)
#define PRAGMA(x) _Pragma(#x)
```

What will the following line look like after macro expansion?

```c
IDENT(foo)
```

### Solution

```c
#pragma ident "foo"
```
