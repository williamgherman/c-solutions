### Exercise 22.03

Find the error in the following program fragment and show how to fix it.

```c
FILE *fp;

if (fp = fopen(filename, "r")) {
    /* read characters until end-of-file */
}
fclose(fp);
```

### Solution

If `fopen` fails to open `filename`, then `fp` will contain a null pointer,
which will cause `fclose` to fail. To fix this, only call `fclose` upon
successful opening:

```c
FILE *fp;

if (fp = fopen(filename, "r")) {
    /* read characters until end-of-file */
} else {
    fprintf(stderr, "Error, cannot open file: %s\n", filename);
    exit(EXIT_FAILURE);
}
fclose(fp);
```
