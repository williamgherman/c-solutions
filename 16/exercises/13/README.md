### Exercise 16.13

Suppose that `s` is the following structure (`point` is a structure tag declared
in Exercise 10):

```c
struct shape {
    int shape_kind;            /* RECTANGLE or CIRCLE */
    struct point center;       /* coordinates of center */
    union {
        struct {
            int height, width;
        } rectangle;
        struct {
            int radius;
        } circle;
    } u;
} s;
```

If the value of `shape_kind` is `RECTANGLE`, the `height` and `width` members
store the dimensions of a rectangle. If the value of `shape_kind` is `CIRCLE`,
the `radium` member stores the radius of a circle. Indicate which of the
following statements are legal, and show how to repair the ones that aren't:

(a) `s.shape_kind = RECTANGLE;`  
(b) `s.center.x = 10;`  
(c) `s.height = 25;`  
(d) `s.u.rectangle.width = 8;`  
(e) `s.u.circle = 5;`  
(f) `s.u.radius = 5;`

### Solution

(a), (b) and (d) are legal statements. (c) must be changed to access the
`rectangle` structure in the `u` union: `s.u.rectangle.height = 25;`; (e) must
be changed to access the `radius` member of the `circle` structure within the
`u` union: `s.u.circle.radius = 5;`; and (f) must do the same:
`s.u.circle.radius = 5;`.
