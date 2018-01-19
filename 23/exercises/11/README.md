### Exercise 23.11

Write a call of `memset` that replaces the last `n` characters in a
null-ternimated string `s` with `!` characters.

### Solution

```c
memset(&s[strlen(s)-n], '!', n);
```
