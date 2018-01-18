### Exercise 23.05

Using `isxdigit`, write a function that checks whether a string represents a
valid hexadecimal number (it consists solely of hexadecimal digits). If so, the
function returns the value of the number as a `long int`. Otherwise, the
function returns -1.

### Solution

```c
long int hexstringtolong(char *s)
{
    while (*s)
    {
        if (!isxdigit(*s))
            return -1;
        s++;
    }
    return strtol(s, NULL, 16);
}
```
