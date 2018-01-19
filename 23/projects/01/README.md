### Project 23.01

Write a program that finds the roots of the equation *ax*<sup>2</sup> + *bx* +
*c* = 0 using the formula

<p align="center">
<img src="quadratic-formula.png" alt="Quadratic Formula" />
</p>

Have the program prompt for the values of *a*, *b* and *c*, then print both
values of *x* (If *b*<sup>2</sup> - 4*ac* is negative, the program should
instead print a message to the effect that the roots are complex).

### Solution

See `1.c`.

NB: The `<math.h>` library must be linked to the executable, despite its part of
the standard library. In Linux/UNIX, the `-lm` linker option must be added to
the compiler. See the `Makefile` for the complete `gcc` command used.
