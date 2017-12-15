### Exercise 15.03

We saw that writing `#include <`*file*`>` instead of `#include "`*file*`"` may
not work if *file* is one that we've written. Would there by any problem with
writing `#inlude "`*file*`"` instead of `#include <`*file*`>` if *file* is a
system header?

### Solution

Yes.

The system normally looks in a predetermined location for system header files,
and including a file with the same name as a system header file would only look
in the local scope and potentially redefine a system header file as a local
header file.
