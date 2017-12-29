### Exercise 18.02

Answer each of the following questions with `auto`, `extern`, `register` and/or
`static`.

(a) Which storage class is used primarily to indicate that a variable or
function can be shared by several files?  
(b) Suppose that a variable `x` is to be shared by several functions in one file
but hidden from functions in other files. Which storage class should `x` be
declared to have?  
(c) Which storage classes can affect the storage duration of a variable?

### Solution

#### (a)

`extern`.

#### (b)

`static`.

#### (c)

`extern` and `static` for non-global variables.
