### Exercise 18.12

(a) Write a complete description of the type of the function `f`, assuming that
it's declarred as follows:

```c
int (*f(float (*)(long), char *))(double);
```

(b) Give an example showing how `f` would be called.

### Solution

#### (a)

`f` is a function which has two arguments: 1) a pointer to a function with a
`long` argument returning a `float` and 2) a pointer to a `char`. The function
returns a pointer to a function with a `double` argument, returning type `int`.

#### (b)

```c
int n = *f(g, &ch)(3.14)
```
