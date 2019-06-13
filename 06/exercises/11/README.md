### Exercise 6.11
What output does the following program fragment produce?

```c
sum = 0;
for (i = 0; i < 10; i++) {
    if (i % 2)
        continue;
    sum += i;
}
printf("%d\n", sum);
```

### Solution

`20`
