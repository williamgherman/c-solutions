### Exercise 6.10
Show how to replace a `continue` statement by an equivalent `goto` statement.

### Solution
Label the end of the loop and `goto` that label:

```c
for (i = 0; i <= 10; i++) {
    if (i % 2 == 1)
        continue;
    printf("%d ", i);
}
```

is the same as

```c
for (i = 0; i <= 10; i++) {
    if (i % 2 == 1)
        goto end;
    printf("%d ", i);
    end:
}
```
