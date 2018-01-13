### Exercise 22.14

(a) Write your own version of the `fgets` function. Make it behave as much like
the real `fgets` function as possible; in particular, make sure that it has the
proper return value. To avoid conflicts with the standard library, don't name
your function `fgets`.

(b) Write your own version of `fputs`, following the same rules as in part (a).

### Solution

#### (a)

```c
char *my_fgets(char *s, int n, FILE *stream)
{
    int c, len = 0;
    while (len < n - 1)
    {
        if ((c = getc(stream)) == EOF)
        {
            if (len == 0 || ferror(stream))
                return NULL;
            break;
        }
        s[len++] = c;
        if (c == '\n')
            break;
    }
    s[len] = '\0';
    return s;
}
```

#### (b)

```c
int my_fputs(const char *s, FILE *stream)
{
    while (*s != '\0')
    {
        if (putc(*s, stream) == EOF)
            return EOF;
        s++;
    }
    return 0;
}
```
