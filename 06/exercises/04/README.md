### Exercise 6.04
Which one of the following statements is not equivalent to the other two
(assuming that the loop bodies are the same)?

(a) `for (i = 0; i < 10; i++)` ...  
(b) `for (i = 0; i < 10; ++i)` ...  
(c) `for (i = 0; i++ < 10; )` ...

### Solution
The third statement (c) is not equivalent to the other two, because the postfix
increment operator will only be applied after the conditional expression is
evaluated, unlike the other two in which the two expressions are separate.
