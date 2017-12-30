### Exercise 18.05

State whether each of the following statements is true or false. Justify each
answer.

(a) Every variable with static storage duration has file scope.  
(b) Every variable declared inside a function has no linkage.  
(c) Every variable with internal linkage has static storage duration.  
(d) Every parameter has block scope.

### Solution

#### (a)

False. A `static` variable declared inside a function will have block scope:

```c
int f(void)
{
    static int i = 0;
    return i++;
}
```

#### (b)

False. A variable with an `extern` storage class will have internal (if declared
`static` outside of a function) or external linkage.

#### (c)

True. Variables declared `static` (producing a variable with internal linkage)
will have static storage duration.

#### (d)

True. Parameters will have block scope for the function they are applied to.
