### Exercise 6.13
Rewrite the following loop so that its body is empty:

```c
for (n = 0; m > 0; n++)
    m /= 2;
```

### Solution

```c
for (n = 0; m > 0; n++, m /= 2)
    ;
```
