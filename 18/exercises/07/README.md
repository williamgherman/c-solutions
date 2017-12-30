### Exercise 18.07

Suppose that we declare `x` to be a `const` object. Which one of the following
statements about `x` is *false*?

(a) If `x` is of type `int`, it can be used as the value of a case label in a
`switch` statement.  
(b) The compiler will check that no assignment is made to `x`.  
(c) `x` is subject to the same scope rules as variables.  
(d) `x` can be of any type.

### Solution

(a) is false because constant variables cannot be used in constant expressions.
All other statements are true.
