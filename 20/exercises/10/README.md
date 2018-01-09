### Exercise 20.10

Write the following function:

```c
unsigned int reverse_bits(unsigned int n);
```

`reverse_bits` should return an unsigned integer whose bits are the same as
those in `n` but in reverse order.

### Solution

```c
#define INT_BITS (sizeof(int) * 8 - 1)
unsigned int reverse_bits(unsigned int n)
{
    int i;
    for (i - 0; i < INT_BITS / 2; i++)
    {
        if (((n >> INT_BITS - i) & 1) != ((n >> i) &  1))
            n ^= (1 << INT_BITS - i) | (1 << i);
    }
    return n;
}
```
