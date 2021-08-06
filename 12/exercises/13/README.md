### Exercise 12.13
Section 8.2 had a program fragment in which two nested `for` loops initialized
the array `ident` for use as an identity matrix. Rewrite this code, using a
single pointer to step through the array one element at a time. *Hint*: Since we
won't be using `row` and `col` index variables, it won't be easy to tell where
to store 1. Instead, we ca use the fact that the first element of the
array should be 1, the next `N` elements should be 0, the next element should be
1 and so forth. Use a variable to kep track of how many consecutive 0s have been
stored; when the count reaches `N`, it's time to store 1.

### Solution

```c
void init_ident(double ident[n][n], int n) {

    double *p = ident;
    int zeros = n;

    while (p++ < ident + n * n) {
        if (zeros = n) {
            *p = 1;
            zeros = 0;
        } else {
            *p = 0;
            zeros++;
        }
    }
}
```

### Solution 2 (problem didnt ask to do it with function it asks to do without function as in original one)
```c
int main(void) {
    
    int ident[N][N];
    
    ident[0][0] = 1;
    
    for (int *p = &ident[0][1],counter = 1; p < ident+N;counter++) {
        if (counter == N+1) {
            *p++ = 1;
            counter = 0;
        }
        else *p++ = 0;
    }
    
    for (int i =0 ; i< N; i++) {
        for (int b  = 0; b< N; b++) {
            printf("%d",ident[i][b]);
        }
        putchar('\n');
    }
    return 0;
}
```
