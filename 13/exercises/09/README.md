### Exercise 13.09
What will be the value of the string `s1` after the following statements have
been executed?

```c
strcpy(s1, "computer");
strcpy(s2, "science");
if (strcmp(s1, s2) < 0)
    strcat(s1, s2);
else
    strcat(s2, s1);
s1[strlen(s1)-6] = '\0';
```

### Solution
`"computers\0"`
