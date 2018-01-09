### Exercise 20.14

When stored according to the IEEE floating-point standard, a `float` value
consists of a 1-bit sign (the leftmost -- or most significant -- bit), an 8-bit
exponent, and a 23-bit fraction, in that order. Design a structure type that
occupies 32 bits, with bit-field members corresponding to the sign, exponent,
and fraction. Declare the bit-fields to have type `unsigned int`. Check the
manual for your compiler to determine the order of the bit-fields.

### Solution

```c
struct float_value {
    unsigned int fraction: 23;
    unsigned int exponent: 8;
    unsigned int sign: 1;
};
```

NB: The ordering of this structure is according to GCC.
