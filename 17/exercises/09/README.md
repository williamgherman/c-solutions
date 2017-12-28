### Exercise 17.09

True or false: If `x` is a structure and `a` is a member of that structure, then
`(&x)->a` is the same as `x.a`. Justify your answer.

### Solution

True. When expanded, the right arrow operator (`->`), expands to the dereference
operator and the dot operator (`*` and `.`); so, `(&x)->a` expands to `*(&x).a`.
The dereference and address-of operators cancel to produce `x.a`.
