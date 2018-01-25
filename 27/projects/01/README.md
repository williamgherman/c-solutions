### Project 27.01

(C99) Make the following modifications to the `quadratic.c` program of Section
27.4:

(a) Have the user enter the coefficients of the polynomial (the values of the
variables `a`, `b` and `c`).

(b) Have the program test the discriminant before displaying the values of the
roots. If the discriminant is negative, have the program display the roots in
the same way as before. If it's nonnegative, have the program display the roots
as real numbers (without an imaginary part). For example, if the quadratic
equation is *x*<sup>2</sup> + *x* + 2 = 0, the output of the program would be

```
root1 = 1
root2 = -2
```

(c) Modify the program so that it displays a complex number with a negative
imaginary part as *a* - *bi* instead of *a* + -*bi*. For example, the output of
the program with the original coefiicients would be

```
root1 = -0.2 + 0.4i
root2 = -0.2 - 0.4i
```

### Solution

See `quadratic.c`.
