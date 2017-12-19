### Exercise 16.17

Suppose that `b` and `i` are declared as follows:

```c
enum {FALSE, TRUE} b;
int i;
```

Which of the following statements are legal? Which ones are "safe" (always yield
a meaningful result)?

(a) `b = FALSE;`  
(b) `b = i;`  
(c) `b++;`  
(d) `i = b;`  
(e) `i = 2 * b + 1;`

### Solution

All statements are legal, but (b) and (c) are potentially unsafe, as
incrementing `b` or assigning the value of `i` to `b` could result in `b` having
a value outside of its regular range.
