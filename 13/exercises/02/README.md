### Exercise 13.02
Suppose that `p` has been declared as follows:

```c
char *p = "abc";
```

Which of the followin function calls are legal? Show the output produced by each
legal call, and explain why the others are illegal.

(a) `putchar(p);`  
(b) `putchar(*p);` 
(c) `puts(p);`  
(d) `puts(*p);`

(a) Illegal: `putchar` expects a `char`, receives a pointer to `char`.  
(b) `a`  
(c) `abc\n`  
(d) Illegal: `puts` expects a `char *` and receives a `char`.
