### Exercise 16.16

Which of the following statements about enumeration constants are true?

(a) An enumeration constant may represent any integer specified by the
programmer.  
(b) Enumeration constants have exactly the same properties as constants created
using `#define`.  
(c) Enumeration constants have the values 0, 1, 2, ... by default.  
(d) All constants in an enumeration must have different values.  
(e) Enumeration constants may be used as integers in expressions.

### Solution

(a), (c) and (e) are true statements. (b) is false because enumeration constants
can have block scope and are not evaluated by the preprocessor. (d) is
demonstrably false:

```c
enum polygon_sides {
    SQUARE = 4,
    RECTANGLE = 4,
    CIRLCE = 0,
    TRIANGLE = 3,
    PENTAGON = 5,
    HEXAGON = 6,
};
```
