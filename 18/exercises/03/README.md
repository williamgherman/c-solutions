### Exercise 18.03

List the storage duration (static or automatic), scope (block or file) and
linkage (internal, external or none) of each variable and parameter in the
following file:

```c
extern float a;

void f(register double b)
{
    static int c;
    auto char d;
}
```

### Solution

`a`: static duration, file scope, external linkage.  
`b`: automatic duration, block scope, no linkage.  
`c`: static duration, block scope, no linkage.  
`d`: automatic duration, block scope, no linkage.
