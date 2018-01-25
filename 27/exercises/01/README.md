### Exercise 27.01

(C99) Locate the declarations of the `int`*N*`_t` and `uint`*N*`_t` types in
the `<stdint.h>` header installed on your system. Which values of *N* are
supported?

### Solution

On my machine, the `int`*n*`_t` and `uint`*N*`_t` types are declared on separate
headers included in the `<stdint.h>` header. Regardless, the available types
include 8-, 16-, 32- and 64-bit exact integer types, signed and unsigned.
