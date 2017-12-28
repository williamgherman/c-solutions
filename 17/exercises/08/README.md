### Exercise 17.08

Section 15.2 describes a file, `stack.c`, that provides functions for storing
integers in a stack. In that section, the stack was implemented as an array.
Modify `stack.c` so that a stack is now stored as a linked list. Replace the
`contents` and `top` variables by a single variable that points to the first
node in the list (the "top" of the stack). Write the functions in `stack.c` so
that they use this pointer. Remove the `is_full` function, instead having `push`
return either `true` (if memory was available to create a node) or `false` (if
not).

### Solution

See `stack.c`.
