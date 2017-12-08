### Exercise 13.07
Suppose that `str` is an array of characters. Which one of the following
statements is not equivalent to the other three?

(a) `*str = 0;`  
(b) `str[0] = '\0';`  
(c) `strcpy(str, "");`  
(d) `strcat(str, "");`

### Solution
(d) is not equivalent to the other three options, as `strcat` appends the null
character to the end of `str`, while the other three insert the value at the
first character of `str`.
