### Exercise 14.07

Let `GENERIC_MAX` be the following macro:

```c
#define GENERIC_MAX(type)       \
type type##_max(type x, type y) \
{                               \
    return x > y ? x : y;       \
}
```

(a) Show the preprocessor's expansion of `GENERIC_MAX(long)`.  
(b) Explain why `GENERIC_MAX` doesn't work for basic types such as `unsigned
long`.  
(c) Describe a technique that would allow us to use `GENERIC_MAX` with basic
types such as `unsigned long`. *Hint:* Don't change the definition of
`GENERIC_MAX`.

### Solution

#### (a)

```c
long long_max(long x, long y)
{
    return x > y ? x : y;
}
```

#### (b)

Types including a space character in their name will not work for this function
creation because of the `##` operator in the macro definition, illegally
creating a function `unsigned long unsigned long_max()`.

#### (c)

A solution to this issue would be to define an equivalent type which has no
spaces in its name, such as 

```c
typedef unsigned long u_long;
```
