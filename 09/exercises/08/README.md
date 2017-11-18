### Exercise 9.08
Which of the following would be valid prototypes for a function that returns
nothing and has one `double` parameter?

(a) `void f(double x);`  
(b) `void f(double);`  
(c) `void f(x);`  
(d) `f(double x);`

### Solution
(a) and (b) are the only valid prototypes which meet the requirements. In (c),
`x` has no provided type, causing an error. In (d), the function `f` has no
provided type, causing an error in C99 and defaulting to `int` in C89.
