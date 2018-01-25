### Exericse 27.04

(C99) Assume that the following variable declarations are in effect:

```c
int i;
float f;
double d;
long double ld;
float complex dc;
double complex dc;
long double complex ldc;
```

Each of the following is an invocation of a macro in `<tgmath.h>`. Show what it
will look like after preprocessing, when the macro has been replaced by a
function from `<math.h>` or `<complex.h>`.

(a) `tan(i)`  
(b) `fabs(f)`  
(c) `asin(d)`  
(d) `exp(ld)`  
(e) `log(fc)`  
(f) `acosh(dc)`  
(g) `nexttoward(d, ld)`  
(h) `remainder(f, i)`  
(i) `copysign(d, ld)`  
(j) `carg(i)`  
(k) `cimag(f)`  
(l) `conj(ldc)`

### Solution

(a) `tan(i)`  
(b) `fabsf(f)`  
(c) `asin(d)`  
(d) `expl(ld)`  
(e) `clogf(fc)`  
(f) `cacosh(dc)`  
(g) `nexttoward(d, ld)`  
(h) `remainder(f, i)`  
(i) `copysignl(d, ld)`  
(j) `carg(i)`  
(k) `cimagf(f)`  
(l) `conjl(ldc)`
