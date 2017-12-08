### Exercise 13.15
Let `f` be the following function:

```c
int f(char *s, char *t)
{
    char *p1, *p2;

    for (p1 = s; *p1; p1++) {
        for (p2 = t; *p2; p2++)
            if (*p1 == *p2) break;
        if (*p2 == '\0') break;
    }
    return p1 - s;
}
```

(a) What is the value of `f("abcd", "babc")`?  
(b) What is the value of `f("abcd", "bcd")`?  
(c) In general, what value does `f` return when passed two strings `s` and `t`?

### Solution
#### (a)
`f("abcd", "babc")` returns `0`.

#### (b)
`f("abcd", "bcd")` returns `1`.

#### (c)
`f` returns the first character in `s` which has a matching character in `t`.
