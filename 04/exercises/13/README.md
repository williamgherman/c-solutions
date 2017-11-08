### Exercise 4.13
Only one of the expressions `++i` and `i++` is exactly the same as `(i += 1)`;
which is it? Justify your answer.

### Solution
The prefix increment operator `++i` is equivalent to `(i += 1)` because the
value is immediately read as `i + 1`, unlike the postfix operator, which applies
the assignment but does not read the value immediately as `i + 1` but as `i`.
