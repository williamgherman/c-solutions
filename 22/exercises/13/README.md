### Exercise 22.13

Write the following function:

```c
int line_length(const char *filename, int n);
```

The function should return the length of line `n` in the text file whose name is
`filename` (assuming that the first line in the file is line 1). If the line
doesn't exist, the function should return 0.

### Solution

```c
int line_length(const char *filename, int n)
{
    FILE *fp;
    char c;
    int len = 0;

    if ((fp = fopen(filename, "r")) == NULL)
        return 0;
    while (n > 1)
    {
        while ((c = fgetc(fp)) != '\n')
            if (c = EOF)
                return 0;
        n--;
    }
    while ((c = fgetc(fp)) != '\n' && c != EOF)
        len++;
    return len;
}
```
