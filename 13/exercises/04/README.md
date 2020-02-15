### Exercise 13.04
Modify the `read_line` function in each of the following ways:

(a) Have it skip whitespace before beginning to store input characters.  
(b) Have it stop reading at the first whitespace character. *Hint*: To determine
whether or not a character is whitespace, call the `isspace` function.  
(c) Have it stop reading at the first newline character, then store the newline
character in the string.  
(d) Have it leave behind characters that it doesn't have room to store.

### Solutions
(a)
```c
int read_line(char str[], int n) {
    int ch, i = 0;

    while (isspace((ch = getchar())) && ch != '\n')
        ; 
    while (ch != '\n') {
        if (i < n)
            str[i++] = ch;
        ch = getchar();
    }
    str[i] = '\0';
    return i;
}
```

(b)
```c
int read_line(char str[], int n) {
    int ch, i = 0;

    while (!isspace((ch = getchar())))
        if (i < n)
            str[i++] = ch;
    str[i] = '\0';
    return i;
}
```

(c)
```c
int read_line(char str[], int n) {
    int ch, i = 0;

    do {
        ch = getchar();
        if (i < n)
            str[i++] = ch;
    } while (ch != '\n');
    str[i] = '\0';
    return i;
}
```

(d)
```c
int read_line(char str[], int n) {
    int ch, i = 0;

    while (i < n && (ch = getchar()) != '\n')
        str[i++] = ch;
    str[i] = '\0';
    return i;
}
```
