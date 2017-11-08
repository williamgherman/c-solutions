### Exercise 4.02
If `i` and `j` are positive integers, does `(-i)/j` always have the same value
as `-(i/j)`? Justify your answer.

### Solution
No. The C89 and C99 standards implement division of negative numbers
differently: `(-9)/7` can produce -1 or -2 in C89, while `-(9/7)` will always
produce -1. C99 will always truncate the remainder towards zero, however, so the
answers produced by `(-i)/j` and `-(i/j)` will be equivalent.
