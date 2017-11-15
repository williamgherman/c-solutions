### Exercise 8.01
We discussed using the expression `sizeof(a) / sizeof(a[0])` to calculate the
number of elements in an array. The expression `sizeof(a) / sizeof(`*t*`)`,
where *t* is the type of `a`'s elements, would also work, but it's considered an
inferior technique. Why?

### Solution

The second expression may not necessarily reflect the type of a value in `a`.
For example, if `a` was changed from an array of `int`s to an array of `long`s,
then each instance of `sizeof(`*t*`)` would have to be changed.
