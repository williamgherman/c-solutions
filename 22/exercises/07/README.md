### Exercise 22.07

Suppose that we call `scanf` as follows:

```c
n = scanf("%d%f%d", &i, &x, &j);
```

(`i`, `j` and `n` are `int` variables and `x` is a `float` variable.) Assuming
that the input stream contains the characters shown, give the values of `i`,
`j`, `n` and `x` after the call. In addition, indicated which characters were
consumed by the call.

(a) `10●20●30¤`  
(b) `1.0●2.0●3.0¤`  
(c) `0.1●0.2●0.3¤`  
(d) `.1●.2●.3¤`

### Solution

NB: Ignore all spaces in input streams. Real spaces have been indicated by `●`,
and the newline characters have been indicated by `¤`.

#### (a)

~~`10●20●30`~~`¤`

`n` = 3  
`i` = 10  
`x` = 20.0  
`j` = 30

#### (b)

~~`1.0●2`~~`.0●3.0¤`

`n` = 3  
`i` = 1  
`x` = 0.0  
`j` = 2

#### (c)

~~`0.1●0`~~`.2●0.3¤` 

`n` = 3  
`i` = 0  
`x` = 0.1  
`j` = 0

#### (d)

`.1●.2●.3¤`

`n` = 0  
`i` = undefined  
`x` = undefined  
`j` = undefined
