### Exercise 13.06
Write a function named `censor` that modifies a string by replacing every
occurrence of `foo` by `xxx`. For example, the string `"food fool"` would become
`"xxxd xxxl"`. Make the function as short as possible without sacrificing
clarity.

### Solution

```c
void censor(char *str) {
    char *c = str;
    while (c+2 != '\0') {
        if (*c == 'f' && *(c+1) == 'o' && *(c+2) == 'o')
            *c = *(c+1) = *(c+2) = 'x';
        c++;
    }
}
```
