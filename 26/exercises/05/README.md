### Exercise 26.05

Write the following function:

```c
char *vstrcat(const char *first, ...);
```

All arguments of `vstrcat` are assumed to be strings, except for the last
argument, which must be a nul pointer (cast to `char *` type). The function
returns a pointer to a dunamically allocated string containing the concatenation
of the arguments. `vstrcat` should return a null pointer if not enough memory is
available. *Hint:* Have `vstrcat` go through the arguments twice: once to
determine the amount of memory required for the returned string and once to copy
the arguments into the string.

### Solution

```c
char *vstrcat(const char *first, ...)
{
    char *res, *p;
    int len = 0;
    va_list ap;
    
    va_start(ap, first);
    while ((p = va_arg(ap, char *)) != ((char *) NULL))
        len += strlen(p);
    len++;
    if ((res = malloc(len)) == NULL)
    {
        va_end(ap);
        return NULL;
    }

    va_end(ap);
    va_start(ap, first);
    strcpy(res, va_arg(ap, char *));

    while ((p = va_arg(ap, char *)) != ((char *) NULL))
        strcat(res, p);
    
    va_end(ap);
    return res;
}
```
