### Exercise 17.02

Write a function named `duplicate` that uses dynamic storage allocation to
create a copy of a string. For example, the call

```c
p = duplicate(str);
```

would allocate space for a string of the same length as `str`, copy the contents
of `str` into the new string, and return a pointer to it. Have `duplicate`
return a null pointer if the memory allocation fails.

### Solution

```c
char *duplicate(char *str) {
    char *news = (char *) malloc(strlen(s) + 1);
    if (news == NULL) {
        printf("Error: malloc failed\n");
        return NULL;
    }
    strcpy(news, str);
    return news;
}
```
