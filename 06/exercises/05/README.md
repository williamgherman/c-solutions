### Exercise 6.05
Which one of the following statements is not equivalent to the other two
(assuming that the loop bodies are the same)?

(a) `while (i < 10) {`...`}`  
(b) `for (; i < 10;) {`...`}`  
(c) `do {`...`} while (i < 10);`

### Solution
The third statement (c) is not equivalent to the other two, because the `do`
statement will always run at least once, then check if the condition in the
`while` statment is true, unlike the other two statements, which always check
the condition first.
