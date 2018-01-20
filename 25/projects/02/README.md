### Project 25.02

Write a program that obtains the name of a locale from the command line and then
displays the values stored in the corresponding `lconv` structure. For example,
if the locale is `"fi_FI"` (Finland), the output of the program might look like
this:

```
decimal_point = ","
thousands_sep = " "
grouping = 3
mon_decimal_point = ","
mon_grouping = 3
positive_sign = ""
negative_sign = "-"
currency_symbol = "EUR
frac_digits = 2
p_cs_precedes = 0
n_cs_precedes = 0
p_sep_by_space = 2
n_sep_by_space = 2
p_sign_posn = 1
n_sign_posn = 1
int_curr_symbol = "EUR "
int_frac_digits = 2
int_p_cs_precedes = 0
int_n_cs_precedes = 0
int_p_sep_by_space = 2
int_n_sep_by_space = 2
int_p_sign_posn = 1
int_n_sign_posn = 1
```

For readability, the characters in `grouping` and `mon_grouping` should be
displayed as decimal numbers.

### Solution

See `2.c`.
