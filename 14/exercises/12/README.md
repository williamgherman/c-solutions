### Exercise 14.12

Suppose that the macro `M` has been defined as follows:

```c
#define M 10
```

Which of the following tests will fail?

(a) `#if M`  
(b) `#ifdef M`  
(c) `#ifndef M`  
(d) `#if defined(M)`  
(e) `#if !defined(M)`

### Solution

(c) and (e) will fail their tests, as `M` is defined.
