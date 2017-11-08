### Exercise 5.08
The following `if` statement is unnecessarily complicated. Simplify it as much
as possible. (*Hint*: The entire statement can be replaced by a single
assignment.)

```c
if (age >= 13)
    if (age <= 19)
        teenager = true;
    else
        teenager = false;
else if (age < 13)
    teenager = false;
```

### Solution

```c
teenager = age >= 13 && age <= 19;
```
