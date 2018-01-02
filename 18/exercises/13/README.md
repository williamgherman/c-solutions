### Exercise 18.13

Which of the following declarations are legal? (Assume that `PI` is a macro that
represents 3.14159.)

(a) `char c = 65;`  
(b) `static int i = 5, j = i * i;`  
(c) `double d = 2 * PI;`  
(d) `double angles[] = {0, PI / 2, PI, 3 * PI / 2};`

### Solution

(a), (c) and (d) are legal declarations. (b) is not legal because a declaration
with static storage duration requires a constant expression.
