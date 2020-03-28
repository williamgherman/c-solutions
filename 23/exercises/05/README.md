### Exercise 23.05

Using `isxdigit`, write a function that checks whether a string represents a
valid hexadecimal number (it consists solely of hexadecimal digits). If so, the
function returns the value of the number as a `long int`. Otherwise, the
function returns -1.

### Solution

```c
long int hexstringtolong(char *s)
{
    while (*s)
    {
        if (!isxdigit(*s))
            return -1;
        s++;
    }
    return strtol(s, NULL, 16);
}
```
### MY_SOLUTION
Solution above will never work because pointer is getting incremented;
To solve it either another pointer must be declared which will point to char *s or counter in block scope should be used to go over string.
### Solution 1
```
long is_hex(char *a){

char *p=a;

for(;*p;p++) if(!isxdigit(*p)) return -1;

return strtol(a,NULL,16);
}
```

### Solution 2
```
long is_hex(char *p){
if(strlen(a)>255) for(unsigned int i=0;p[i];i++) if(!isxdigit(p[i])) return -1;
else for(unsigned char i=0;p[i];i++) if(!isxdigit(p[i])) return -1;

return strtol(a,NULL,16);
}
```
