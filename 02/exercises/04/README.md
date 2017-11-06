### Exercise 2.04
Write a program that declares several `int` and `float` variables--without
initializing them--and then prints their values. Is there any pattern to the
values? (Usually there isn't.)

### Solution
See `4.c` for the complete program. 

There is no pattern for the first few integers produced, however, upon repeated
compilations and repeated tests, the last two integers and all floats are
usually `0` or `0.000000`, with occasional deviation to "random" garbage values.
