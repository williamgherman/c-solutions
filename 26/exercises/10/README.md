### Exercise 26.10

Convert the following calls of `atoi`, `atol` and `atoll` into calls of
`strtol`, strtol` and `strtoll`, respectively.

(a) `atoi(str)`  
(b) `atol(str)`  
(c) `atoll(str)`

### Solution

(a) `strtol(str, &str, 10)`  
(b) `strtol(str, &str, 10)`  
(c) `strtoll(str, &str, 10)`
