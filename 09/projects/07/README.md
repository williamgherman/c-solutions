### Project 9.07
The `power` function of Section 9.6 can be made faster by having it calculate
*x*<sup>*n*</sup> in a different way. We first notice that if *n* is a power of
2, then *x*<sup>*n*</sup> can be computed by squaring. For example,
*x*<sup>4</sup> is the square of *x*<sup>2</sup>, so *x*<sup>4</sup> can be
computed using only two multiplications instead of three. As it happens, this
technique can be used even when *n* is not a power of 2. If *n* is evem we use
the formula *x*<sup>*n*</sup> = (*x*<sup>*n*/2</sup>)<sup>2</sup>. If *n* is
odd, then *x*<sup>*n* = *x* x *x*<sup>*n*-1</sup>. Write a recursive function
that computes *x*<sup>*n*</sup>. (The recursion ends when *n* = 0, in which case
the function returns 1.) To test your function, write a program that asks the
user to enter values for *x* and *n*, calls `power` to compute
*x*<sup>*n*</sup>, and then displays the value returned by the function.

### Solution
See `7.c`.
