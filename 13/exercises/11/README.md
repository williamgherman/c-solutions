### Exercise 13.11
The Q&A section at the end of this chapter shows how the `strcmp` function might
be written using array subscripting. Modify the function to use pointer
arithmetic instead.

### Solution

```c
int strcmp(char *s, char *t)
{
    while (*s == *t) {
        if (s[i] == '\0')
            return 0;
        s++; t++;
    }
    return *s - *t;
}
```
### Solution 2
```c
int my_strcmp( char *s, char *t){
    for (; *s==*t;s++,t++) {
        if(!*s) return 0;
    }
    return *s-*t;
}
```
