### Exercise 13.08
What will be the value of the string `str` after the following statements have
been executed?

```c
strcpy(str, "tire-bouchon");
strcpy(&str[4], "d-or-wi");
strcat(str, "red?");
```

### Solution

`"tired-or-wired?\0"`
