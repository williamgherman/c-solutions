### Exercise 22.12

Find the error in the following function and show how to fix it.

```c
int count_periods(const char *filename)
{
    FILE *fp;
    int n = 0;

    if ((fp = fopen(filename, "r")) != NULL) {
        while (fgetc(fp) != EOF)
            if (fgetc(fp) == '.')
                n++;
        fclose(fp);
    }
    return n;
}
```

### Solution

There are too many `fgetc` calls, which will result in only half of the
characters being tested for `EOF` and the other half being tested for `.`. To
fix this error and correctly count the number of periods in the file, assign the
value of `fgetc` to a variable and test it instead:

```c
int count_periods(const char *filename)
{
    FILE *fp;
    int n = 0;
    char c;

    if ((fp = fopen(filename, "r")) != NULL) {
        while ((c = fgetc(fp)) != EOF)
            if (c == '.')
                n++;
        fclose(fp);
    }
    return n;
}
```

NB: This function also does not check for any errors in the output or input
files, which could also potentially lead to problems.
