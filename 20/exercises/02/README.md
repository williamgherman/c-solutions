### Exercise 20.02

Describe a simple way to "toggle" a bit (change it from 0 to 1 or from 1 to 0).
Illustrate the technique by writing a statement that toggles bit 4 of the
variable `i`.

### Solution

Use the exclusive-or operator with a mask of the bit you want to toggle. For
example, if we want to toggle the 4th bit on the right of the variable `i`, this
is the complete process:

```c
i ^= 1 << 4;
```
