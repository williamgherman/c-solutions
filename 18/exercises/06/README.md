### Exercise 18.06

The following function is supposed to print an error message. Each message is
preceded by an integer, indicating the number of times the function has been
called. Unfortunately, the function always displays 1 as the number of the error
message. Locate the error and show how to fix it without making any changes
outside the function.

```c
void print_error(const char *message)
{
    int n = 1;
    printf("Error %d: %s\n", n++, message);
}
```

### Solution

`n` must be declared `static`, so each time it is accessed, the function will
remember its previous value:

```c
void print_error(const char *message)
{
    static int n = 1;
    printf("Error %d: %s\n", n++, message);
}
```
