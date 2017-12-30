### Exercise 18.08

Write a complete description of the type of `x` as specified by each of the
following declarations.

(a) `char (*x[10])(int);`  
(b) `int (*x(int))[5];`  
(c) `float *(*x(void))(int);`  
(d) `void (*x(int, void (*y)(int)))(int);`

### Solution

#### (a)

`x` is an array of ten pointers to functions with an `int` argument which return
`char`.

#### (b)

`x` is a function which takes an `int` argument and returns a pointer to an
array of five integers.

#### (c)

`x` is a function with no arguments which returns a pointer to a function --
which has an `int` argument and returns a pointer to a `float`.

#### (d)

`x` is a function with two arguments: an `int` and a pointer to a function with
an `int` argument which returns nothing. `x` returns a pointer to a function
with an `int` argument and no return value.
