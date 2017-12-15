### Exercise 14.10

Functions can often -- but not always -- be written as parameterized macros.
Discuss what characteristics of a function would make it unsuitable as a macro.

### Solution

Recursive functions and functions with arguments which have side effects have
different behaviour as a macro, making a function more suitable.
