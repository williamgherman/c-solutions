### Exercise 23.03

(C99) Check the documentation for your compiler to see if it performs
contraction on arithmetic expressions and, if so, under what circumstances.

### Solution

With GCC, when the `FP_CONTRACT` does not disallow floating point expression
contraction, the flags `-ffc-contract=fast`, `-funsafe-math-optimizations` or
`-ffast-math` must be used.
