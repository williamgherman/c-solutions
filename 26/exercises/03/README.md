### Exercise 26.03

Extend the function of Exercise 2 so that it allows two conversion
specifications: `%d` and `%s`. Each `%d` in the format string indicates an `int`
argument, and each `%s` indicates a `char *` (string) argument.

### Solution

```c
void printf(char *s, ...)
{
    va_list ap;
    bool percent = false;
    int digit, i, power, temp;
    char *p;

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
            else if (*s == 's')
            {
                p = va_arg(ap, char *);
                while (*p)
                {
                    putchar(*p);
                    p++;
                }
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
