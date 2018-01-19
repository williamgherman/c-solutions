### Exercise 23.08

Use `strchr` to write the following function:

```c
int numchar(const char *s, char ch);
```

`numchar` returns the number of times each character `ch` occurs in the string
`s`.

### Solution

```c
int numchar(const char *s, char ch)
{
    int count = 0;
    s = strchr(s, ch);
    while (s != NULL)
    {
        count++;
        s = strchr(s + 1, ch);
    }
    return count;
}
```
