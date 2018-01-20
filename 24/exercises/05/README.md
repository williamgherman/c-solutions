### Exercise 24.05

In the `inventory.c` program (see Section 16.3), the `main` function has a `for`
loop that prompts the user to enter an operation code, reads the code and then
calls either `insert`, `search`, `update` or `print`. Add a call of `setjmp` to
`main` in such a way that a subsequent call of `longjmp` will return to the
`for` loop (After the `longjmp`, the user will be prompted for an operation code
and the program will continue normally). `setjmp` will need a `jmp_buf`
variable; where should it be declared?

### Solution

See `inventory.c`.
