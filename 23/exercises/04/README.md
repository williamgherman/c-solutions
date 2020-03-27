### Exercise 23.04

Using `isalpha` and `isalnum`, write a function that checks whether a string has
the syntax of a C identifier (it consists of letters, digits and underscores,
with a letter or underscore at the beginning).

### Solution

```c
bool is_identifier(char *s)
{
    if (!isalpha(*s) && (*s != '_'))
        return false;
    s++;
    while (*s)
    {
        if (!isalnum(*s) && (*s != '_'))
            return false;
        s++;
    }
    return true;
}
```
### my version
```
 bool syntax(char *a){

    if(!isalpha(*a) && *a!='_') return false;

    for(unsigned char i=0;i<strlen(a) && !isalpha(*a) && *a!='_';i++) if(!isalnum(a[i]) && a[i]!='_') return false;

    return true;
}
```
