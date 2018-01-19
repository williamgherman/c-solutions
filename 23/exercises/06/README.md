### Project 23.06

In each of the following cases, indicate which function would be the best to
use: `memcpy`, `memmove`, `strcpy` or `strncpy`. Assume that the indicated
action is to be performed by a single function call.

(a) Moving all elements of an array "down" one position in order to leave room
for a new element in position 0.  
(b) Deleting the first character in a null-terminated string by moving all other
characters back one position.  
(c) Copying a string into a chracter array that may not be large enough to hold
it. If the array is too small, assume that the string is to be truncated; no
null character is necessary at the end.  
(d) Copying the contents of one array variable into another.

### Solution

(a) `memmove`.  
(b) `memmove`.  
(c) `strncpy`.  
(d) `memcpy`.
