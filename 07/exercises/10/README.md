### Exercise 7.10
Suppose that `i` is a variable of type `int`, `j` is a variable of type `long`,
and `k` is a variable of type `unsigned int`. What is the type of the expression
`i + (int) j * k`?

### Solution
`unsigned int`. `j` casts to `int`, and `k` promotes the expression to `unsigned
int`.
