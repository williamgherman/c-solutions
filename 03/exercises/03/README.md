### Exercise 3.03
For each of the following pairs of `scanf` format strings, indicate whether or
not the two strings are equivalent. If they're not, show how they can be
distinguished.

```
(a) "%d"       versus " %d"
(b) "%d-%d-%d" versus "%d -%d -%d"
(c) "%f"       versus "%f "
(d) "%f,%f"    versus "%f, %f"
```

### Solution
(a)and (d) are equivalent, because the `scanf` function matches zero or
more whitespace characters on each whitespace character, except the final
character, as shown in (c). 

(b) is not equivalent. because the `scanf` function ignores whitespace when looking for the start of a number, but not when looking for the literal '-', as follows.
```
"%d- %d- %d" and "%d-%d-%d" are 	equivalent
"%d -%d -%d" and "%d-%d-%d" are not equivalent
```

(c) is not equivalent because the trailing space
will require the user to input a non-whitespace character at the end of the
input signifying the end of the whitespace sequence matched by the space.
