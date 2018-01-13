### Exercise 22.10

The `fcopy.c` program has one minor flaw: it doesn't check for errors as it's
writing to the destination file. Errors during writing are rare, but do
occasionally occur (the disk might become full, for example). Show how to add
the missing error check to the program, assuming that we want it to display a
message and terminate immediately if an error occurs.

### Solution

The loop for writing characters to the new file should be amended with an `if`
statement for each attempted `putc` call, if it returns `EOF`, to write the
error and exit.

See `fcopy.c`.
