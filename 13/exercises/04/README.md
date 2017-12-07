### Exercise 13.04
Modify the `read_line` function in each of the following ways:

(a) Have it skip whitespace before beginning to store input characters.  
(b) Have it stop reading at the first whitespace character. *Hint*: To determine
whether or not a character is whitespace, call the `isspace` function.  
(c) Have it stop reading at the first newline character, then store the newline
character in the string.  
(d) Have it leave behind characters that it doesn't have room to store.

### Solution

```c
int read_line(char str[], int n) {
    int ch, i = 0;

    while (isspace(getchar()))                                /* (a) */
        ; 
    while (i < n && (ch = getchar()) != '\n' && !isspace(ch)) /* (b) & (d) */
        str[i++] = ch;
    if (ch == '\n' && i < n - 1)                              /* (c) */
        str[i++] = '\n';
    str[i] = '\0';
    return i;
}
```
