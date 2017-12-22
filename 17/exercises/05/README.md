### Exercise 17.05

Suppose that `f` and `p` are declared as follows:

```c
struct {
    union {
        char a, b;
        int c;
    } d;
    int e[5];
} f *p = &f;
```

Which of the following statements are legal?

(a) `p->b = ' ';`  
(b) `p->e[3] = 10;`  
(c) `(*p).d.a = '*';`  
(d) `p->d->c = 20;`

### Solution

(b) and (c) are legal. (a) is not legal because it must mention `d`: `p->d.a = '
';`. (d) is not legal because it uses `->` while it should use `.`: `p->d.c =
20;`.
