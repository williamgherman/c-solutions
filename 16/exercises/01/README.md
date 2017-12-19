### Exercise 16.01

In the following declarations, the `x` and `y` structures have members named `x`
and `y`:

```c
struct { int x, y;} x;
struct { int x, y;} y;
```

Are these declarations legal on an individual basis? Could both declarations
appear as shown in a program? Justify your answer.

### Solution

Both declarations are legal individually as well as together: the structures'
member variables are only accessible with the `.` operator, and their scope is
limited to their structure.
