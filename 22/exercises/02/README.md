### Exercise 22.02

Indicate which mode string is most likely to be passed to `fopen` in each of the
following situations:

(a) A database management system opens a file containing records to be updated.  
(b) A mail program opens a file of saved messages so that it can add additional
messages to the end.  
(c) A graphics program opens a file containing a picture to be displayed on the
screen.  
(d) An operating system command interpreter opens a "shell script" (or "batch
file") containing commands to be executed.

### Solution

(a) `rb+`  
(b) `a`  
(c) `rb`  
(d) `r`
