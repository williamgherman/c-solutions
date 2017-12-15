### Exercise 14.05

Let `TOUPPER` be the following macro:

```c
#define TOUPPER(c) ('a'<=(c)&&(c)<='z'?(c)-'a'+'A':(c))
```

Let `s` be a string and let `i` be an `int` variable. Show the output produced
by each of the following program fragments.

(a)

```c
strcpy(s, "abcd");
i = 0;
putchar(TOUPPER(s[++i]));
```

(b)

```c
strcpy(s, "0123");
i = 0;
putchar(TOUPPER(s[++i]));
```

### Solution

#### (a)

```c
putchar(TOUPPER(s[++i]));
putchar(('a'<=(s[++i])&&(s[++i])<='z'?(s[++i])-'a'+'A':(s[++i])))
putchar(('a'<=(s[1])&&(s[2])<='z'?(s[3])-'a'+'A':(s[4])));
putchar('C');
```
Output: `C`.

#### (b)

```c
putchar(TOUPPER(s[++i]));
putchar(('a'<=(s[++i])&&(s[++i])<='z'?(s[++i])-'a'+'A':(s[++i])))
putchar(('a'<=(s[1])&&(s[2])<='z'?(s[3])-'a'+'A':(s[4])));
putchar('\0');
```

Output: `'\0'` (null character).
