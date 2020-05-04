### Exercise 9.05
Write a function `num_digits(n)` that returns the number of digits in `n` (a
positive integer). *Hint*: To determine the number of digits in a number *n*,
divide it by 10 repeatedly. When *n* reaches 0, the number of divisions
indicates how many digits *n* originally had.

### Solution

unsigned int num_digits(unsigned long n){
    unsigned int counter=0;
while(n){
    n/=10;
    counter++;
}
return counter;
}

```
