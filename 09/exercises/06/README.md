### Exercise 9.06
Write a function `digit(n, k)` that returns the `k`<sup>th</sup> digit (from the
right) in `n` (a positive integer). For example `digit(829, 1)` returns 9,
`digit(829, 2)` returns 2 and `digit(829, 3)` returns 8. if `k` is greater than
the number of digits in `n`, have the function return 0.

### Solution

```c
unsigned int digit(unsigned int n, unsigned int k){
    unsigned int n_copy=n;
    unsigned int counter=0;

while(n_copy) {
n_copy/=10;
counter++;
}

if(k>counter) return 0;

int my_array[counter];

for(unsigned char i=0;i<k;i++){
    n_copy=n%10;
    my_array[i]=n_copy;
    n/=10;
if(i==k-1) return my_array[i];
}
}
