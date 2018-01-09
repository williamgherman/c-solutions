### Exercise 20.12

The following function supposedly combines two bytes to form an unsigned short
integer. Explain why the function doesn't work and show how to fix it.

```c
unsigned short create_short(unsigned char high_byte, unsigned char low_byte)
{
    return high_byte << 8 + low_byte;
}
```

### Solution

The function does not work as expected because the addition operator `+` has
precedence over the bitwise shift operator `<<`. Enclosing the operation in
parentheses fixes this issue:

```c
unsigned short create_short(unsigned char high_byte, unsigned char low_byte)
{
    return (high_byte << 8) + low_byte;
}
```
