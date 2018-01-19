### Exercise 23.10

Replace the test condition in the following `if` statement by a single call of
`strstr`:

```c
if (strcmp(str, "foo") == 0 || strcmp(str, "bar") == 0 ||
    strcmp(str, "baz") == 0)
{
    /* ... */
}
```

### Solution

```c
if (strstr("foo#bar#baz", str) != NULL)
{
    /* ... */
}
```

NB: The `strstr` call includes the hash `#` character to separate the strings
`"foo"`, `"bar"` and `"baz"`, to make sure the call doesn't accept a substring
of `"oba"` or `"arb"` and accept it. However, the function will still accept
strings like `"o#ba"` and `"ar#b"`.
