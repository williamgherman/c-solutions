### Exercise 23.09

Replace the test condition in the following `if` statement by a single call of
`strchr`:


`if (ch == 'a' || ch == 'b' || ch == 'c')` ...

### Solution

```c
if (strchr("abc", ch) != NULL)
{
    /* ... */
}
```
