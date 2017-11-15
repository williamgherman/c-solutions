### Exercise 8.04
(C99) Repeat Exercise 3, but this time use a designated initializer. Make the
initializer as short as possible.

### Solution

```c
bool weekend[7] = {[0] = true, [6] = true};
```
