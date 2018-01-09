### Exercise 21.03

When a macro hides a function, which must come first in the header file: the
macro definition or the function prototype? Justify your answer.

### Solution

For the macro (i.e. the preprocessor) to be aware of the function it is hiding,
the function prototype must come before the macro definition.
