### Exercise 27.03

(C99) In each of the following statements, assume that the variable `i` has the
indicated original type. Using macros from the `<inttypes.h>` header, modify
each statement so that it will work correctly if the type of `i` is changed to
the indicated new type.

(a) `printf("%d", i);      Original type: int           New type: int8_t`  
(b) `printf("%12.4d", i);  Original type: int           New type: int32_t`  
(c) `printf("%-6o", i);    Original type: unsigned int  New type: uint16_t`  
(d) `printf("%#x", i);     Original type: unsigned int  New type: uint64_t`

### Solution

(a) `printf("%" PRId8, i);`  
(b) `printf("%12.4" PRId32, i);`  
(c) `printf("%-6" PRIo16, i);`  
(d) `printf("%#" PRIx64, i);`
