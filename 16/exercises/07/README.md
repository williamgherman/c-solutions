### Exercise 16.07

Assume that the `fraction` structure contains two members: `numerator` and
`denominator` (both of type `int`). Write functions that perform the following
operations on fractions:

(a) Reduce the fraction `f` to lowest terms. *Hint:* To reduce a fraction to
lowest terms, first compute the greates common divison (GCD) of the numerator
and denominator. Then devide both the numerator and denominator by the GCD.  
(b) Add the fractions `f1` and `f2`.  
(c) Subtract the fraction `f2` from the fraction `f1`.  
(d) Multiply the fractions `f1` and `f2`.  
(e) Divide the fraction `f1` by the fraction `f2`.

The fractions `f`, `f1` and `f2` will be arguments of type `struct fraction`:
each function will return a value of type `struct fraction`. The fractions
returned by the functions in parts (b)-(e) should be reduced to lowest terms.
*Hint:* You may use the function from part (a) to help write the functions in
parts (b)-(e).

### Solution

#### (a)

```c
struct fraction reduce_fraction(struct fraction f) {
    int temp;
    int n = f.numerator, d = f.denominator;

    while (n % d != 0) {
        temp = d;
        d = n % d;
        n = temp;
    }
    f.numerator /= d;
    f.denominatro /= d;
    return f;
}
```

#### (b)

```c
struct fraction add_fractions(struct fraction f1, struct fraction f2) {
    return reduce_fraction((struct fraction) {f1.numerator * f2.denominator +
        f2.numerator * f1.denominator, f1.denominator * f2.denominator});
}
```

#### (c)

```c
struct fraction subtract_fractions(struct fraction f1, struct fraction f2) {
    return reduce_fraction((struct fraction) {f1.numerator * f2.denominator -
        f2.numerator * f1.denominator, f1.denominator * f2.denominator});
}
```

#### (d)

```c
struct fraction multiply_fractions(struct fraction f1, struct fraction f2) {
    return reduce_fraction((struct fraction) {f1.numerator * f2.numerator,
        f1.denominator * f2.denominator});
}
```

#### (e)

```c
struct fraction divide_fractions(struct fraction f1, struct fraction f2) {
    return reduce_fraction((struct fraction) {f1.numerator * f2.denominator,
        f1.denominator * f2.numerator});
}
```
