### Exercise 22.05

Is there any difference between the `printf` conversion specifications `%.4d`
and `%04d`? If so, explain what it is.

### Solution

The conversion specifications will produce the same output for a given integer.
The precision `.4` in the first specification will pad the integer to four
digits minimum, placing leading zeros if the integer is less than four digits
long. Likewise, the second specification will pad the integer with zeros because
of the given flag `0`, and will produce output 4 digits in length because of the
given field width `4`.
