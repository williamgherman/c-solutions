### Exercise 14.04

For each of the following macros, give an example that illustrates a problem
with the macro and show how to fix it.

(a) `#define AVG(x,y) (x-y)/2`  
(b) `#define AREA(x,y) (x)*(y)`

### Solution

#### (a)

`AVG(1+1, 2+2)` will incorrectly follow standard order of operations:
`(1+1-2+2)/2`, evaluating to 2 rather than predicted -2. Placing parentheses
around the parameters would fix this problem:

```c
#define AVG(x,y) (((x)-(y))/2)
```

#### (b)

`25 / AREA(5,5)` will incorrectly evaluate to 25 rather than predicted 1,
following standard order of operations. Placing parentheses around the entire
definition should fix this problem.

```c
#define AREA(x,y) ((x)*(y))
```
