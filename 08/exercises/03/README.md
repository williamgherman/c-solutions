### Exercise 8.03
Write a declaration of an array named `weekend` containing seven `bool` values.
Include an initializer that makes the first and last values `true`; all other
values should be `false`;

### Solution

```c
bool weekend[7] = {[0]= 1 , [6]= 1}; // it could also be written as bool weekend[7] = {[0]= true , [6]= true};
```
