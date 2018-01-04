### Exercise 19.07

Modify `stackADT2.c` so that a stack automatically doubles in size when it
becomes full. Have the `push` function dynamically allocate a new array that's
twice as large as the old one and then copy the stack contents from the old
array to the new one. Be sure to have `push` deallocate the old array once the
data has been copied.

### Solution

See `stackADT2.c`.
