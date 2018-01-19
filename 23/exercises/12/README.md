### Exercise 23.12

Many versions of `<string.h>` provide additional (nonstandard) functions, such
as those listed below. Write each function using only the features of the C
standard.

(a) `strdup(s)` -- Returns a pointer to a copy of `s` stored in memory obtained
by calling `malloc`. Returns a null pointer if enough memory couldn't be
allocated.  
(b) `stricmp(s1, s2)` -- Similar to `strcmp`, but ignores the case of letters.  
(c) `strlwr(s)` -- Converts upper-case letters in `s` to lower case, leaving
other characters unchanged; returns `s`.  
(d) `strrev(s)` -- Reverses the characters in `s` (except the null character);
returns `s`.  
(e) `strset(s, ch)` -- Fills `s` with copies of the character `ch`; returns `s`.

If you test any of these functions, you may need to alter its name. Function
whose names begin with `str` are reserved by the C standard.

### Solution

#### (a)

```c
char *strdup(char *s)
{
    char *t;
    if ((t = malloc(strlen(s) + 1)) == NULL)
        return NULL;
    strcpy(t, s);
    return t;
}
```

#### (b)

```c
int stricmp(char *s1, char *s2)
{
    int ret = 0;
    while (ret == 0 && *s1 && *s2)
    {
        ret += (tolower(s1) - tolower(s2));
        s1++;
        s2++;
    }
    return ret;
}
```

#### (c)

```c
char *strlwr(char *s)
{
    char *p = s;
    while (*p)
    {
        p = tolower(p);
        p++;
    }
    return s;
}
```

#### (d)

```c
char *strrev(char *s)
{
    char *t = s, *p;
    p = s + strlen(s) - 1;
    while (t < p)
    {
        *t ^= *p;
        *p ^= *t;
        *t ^= *p;
        t++;
        p--;
    }
    return s;
}
```

#### (e)

```c
char *strset(char *s, char ch)
{
    char *p = s;
    while (*p)
    {
        *p = ch;
        p++;
    }
    return s;
}
```
