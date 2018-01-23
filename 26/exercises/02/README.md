### Exercise 26.02

Write a simplified version of `printf` in which the only conversion
specification is `%d`, and all arguments after the first are assumed to have
`int` type. If the function encounters a `%` character that's not immediately
followed by a `d` character, it should ignore both characters. The function
should use calls of `putchar` to produce all output. You may assume that the
format string doesn't contain escape sequences.

### Solution

```c
void printf(char *s, ...)
{
    va_list ap;
    bool percent = false;
    int digit, i, power, temp;

    va_start(ap, s);

    while (*s)
    {
        if (percent)
        {
            if (*s == 'd')
            {
                i = va_arg(ap, int);
                if (i < 0)
                {
                    i = -i;
                    putchar('-');
                }
                temp = i;
                power = 1;
                while (temp > 9)
                {
                    temp /= 10;
                    power *= 10;
                }

                do {
                    digit = i / power;
                    putchar(digit + '0');
                    i -= digit * power;
                    power /= 10;
                } while (i > 0);
            }
            percent = false;
        }
        if (*s == '%')
            percent = true;
        else
            putchar(*s);
        s++;
    }

    va_end(ap);
}
```
