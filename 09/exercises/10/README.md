### Exercise 9.10
Write functions that return the following values. (Assume that `a` and `n` are
parameters, where `a` is an array of `int` values and `n` is the length of the
array.)

(a) The largest element in `a`.  
(b) The average of all elements in `a`.  
(c) The number of positive elements in `a`.

### Solution

#### (a).
```c
#include <stdbool.h>   /* C99 only */
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int largest_element(int a[],unsigned long _size);
double average_element(int a[],unsigned long _size);
unsigned long positive_integers(int a[],unsigned long _size);

int main(void)

{
    int a[]={5,1,5,14,4,-5,6,11,-23,56,3};
    unsigned long b=sizeof(a)/sizeof(a[0]);

    printf("largest element is: %d\n",largest_element(a,b));
    printf("the average of all elements is: %.2f\n",average_element(a,b));
printf("the number of positive elements in array %lu",positive_integers(a,b));

  return 0;
}
int largest_element(int a[],unsigned long _size){
    int largest=0;
for(unsigned char i=0;i<_size;i++) if(largest<a[i]) largest=a[i];
return largest;
}

double average_element(int a[],unsigned long _size){
long sum=0;

for(unsigned char i=0;i<_size;i++) sum+=a[i];


return (double)sum/_size;
}

unsigned long positive_integers(int a[],unsigned long _size){
unsigned long counter=0;
for(unsigned char i=0;i<_size;i++) if(a[i]>0) counter++;
return counter;
}

```
