### Exercise 20.05

Write macros named `GET_RED`, `GET_GREEN` and `GET_BLUE` that, when given a
color as an argument (see Exercise 4), return its 8-bit red, green and blue
intensities.

### Solution

```c
#define GET_RED(x) ((x) & 0xff)
#define GET_GREEN(x) ((x) >> 8 & 0xff)
#define GET_BLUE(x) ((x) >> 16 & 0xff)
```
