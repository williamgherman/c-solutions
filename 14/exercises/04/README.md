### Exercise 14.04

For each of the following macros, give an example that illustrates a problem
with the macro and show how to fix it.

(a) `#define AVG(x,y) (x+y)/2`  
(b) `#define AREA(x,y) (x)*(y)`

### Solution

#### (a)

First problem is the order of operations, `1 / AREA(x,y)` would result in `1 / x*y` rather than `1 / ((x+y)/2)`. Placing parentheses around the entire definition should fix this problem.

Second problem is the missing parentheses in each argument. A statement such as `AVG(a>b,c<d)`would result in `(a>(b+c)<d) / 2`rather than `((a>b)+(c<d)) / 2`. Placing parentheses around each argument should fix this problem.

```c
#define AVG(x,y) (((x)+(y))/2)
```

#### (b)

`25 / AREA(5,5)` will incorrectly evaluate to 25 rather than predicted 1,
following standard order of operations. Placing parentheses around the entire
definition should fix this problem.

```c
#define AREA(x,y) ((x)*(y))
```
