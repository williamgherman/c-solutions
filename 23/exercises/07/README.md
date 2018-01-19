### Exercise 23.07

Section 23.6 explains how to call `strchr` repeatedly to locate all occurrences
of a character within a string. Is it possible to locate all occurrences *in
reverse order* by calling `strrchr` repeatedly?

### Solution

Yes. Here is an example function:

```c
void capitalize_all_gs(char *s)
{
    s = strrchr(s, 'g');
    while (s != NULL)
    {
        *s = 'G';
        s = strrchr(s + 1, 'g');
    }
    return;
}
```

Sample usage:

```c
char *str = "We had a great day together."
capitalize_all_gs(str);
printf("%s", str); 

/* We had a Great day toGether. */
```
