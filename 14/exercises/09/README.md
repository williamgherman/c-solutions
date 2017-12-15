### Exercise 14.09

Write the following parameterized macros.

(a) `CHECK(x,y,n)` - Has the value 1 if both `x` and `y` fall between 0 and
`n`-1, inclusive.  
(b) `MEDIAN(x,y,z)` - Finds the median of `x`, `y` and `z`.  
(c) `POLYNOMIAL(x)` - Computes the polynomial 3x<sup>5</sup> + 2x<sup>4</sup> -
5x<sup>3</sup> - x<sup>2</sup> + 7x - 6.

### Solution

#### (a)

```c
#define CHECK(x,y,n) (((x)>=0&&(x)<=(n)-1&&(y)>=0&&(y)<=(n)-1)?1:0)
```

#### (b)

```c
#define MEDIAN(x,y,z) (((x)>=(y)&&(x)<=(z))?(x):((y)>=(x)&&(y)<=(z))?(y):(z))
```

#### (c)

```c
#define POLYNOMIAL(x) (  (3*(x)*(x)*(x)*(x)*(x)) \
                       + (2*(x)*(x)*(x)*(x))     \
                       - (5*(x)*(x)*(x))         \
                       - ((x)*(x))               \
                       + (7*(x))                 \
                       - 6)
```
