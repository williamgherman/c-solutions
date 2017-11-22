### Project 10.01
Modify the stack example of Section 10.2 so that it stores characters instead of
integers. Next, add a `main` function that asks the user to enter a series of
parentheses and/or braces, then indicates whether or not they're properly
nested:

```
Enter parentheses and/or braces: ((){}{()})
Parentheses/braces are nested properly
```

*Hint*: As the program reads characters, have it push each left parenthesis or
left brace. When it reads a right parenthesis or brace, have it pop the stack
and check that the item popped is a matching parenthesis or brace. (If not, the
parentheses/braces aren't nested properly.) When the program reads the new-line
character, have it check whether the stack is empty; if so, the
parentheses/braces are matched. If the stack *isn't* empty (or if
`stack_underflow` is ever called), the parentheses/braces aren't matched. If
`stack_overflow` is called, have the program print the message `Stack overflow`
and terminate immediately.

### Solution
See `1.c`.
