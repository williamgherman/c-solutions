### Exercise 13.05
(a) Write a function named `capitalize` that capitalizes all letters in its
argument. The argument will be a null-terminated string containing arbitrary
characters, not just letters. Use arry subscripting to access the characters in
the string. *Hint*: Use the `toupper` function to convert each character to
upper case.

(b) Rewrite the `capitalize` function, this time using pointer arithmetic to
access the characters in the string.

### Solution
#### (a)

```c
void capitalize(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (isalpha(str[i]))
            toupper(str[i]);
        i++;
    }
}
```

#### (b)

```c
void capitalize(char *str) {
    char *c = str;
    while (c != '\0') {
        if (isalpha(c))
            toupper(c);
        c++;
    }
}
```
