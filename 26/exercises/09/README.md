### Exercise 26.09

Write a function that returns a random `double` value *d* in the range 0.0 <=
*d* < 1.0.

### Solution

```c
double rand_double(void)
{
    return (double) rand() / (RAND_MAX + 1)
}
```
