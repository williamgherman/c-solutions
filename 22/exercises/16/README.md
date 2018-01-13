### Exercise 22.16

Assume that `str` is a string that contains a "sales rank" immediately preceded
by the `#` symbol (other characters may precede the `#` and/or follow the sales
rank). A sales rank is a series of decimal digits possibly containing commas,
such as the following examples:

```
989
24,675
1,162,620
```

Write a call of `sscanf` that extracts the sales rank (but not the `#` symbol)
and stores it in a string variable named `sales_rank`.

### Solution

```c
sscanf(str, str[0] == '#' ? "%*[#]%[0123456789,]" : "%*[^#]*[#]%[0123456789,]",
       sales_rank);
```
