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
int max_in_array (int a[], int n) {

    int i = 1, max = a[0];
    while (i++ < n) {
        if (n[i] > max)
            max = n[i];
    }
    return max;
}
```

#### (b).

```c
int average (int a[], int n) {

    int i = 0, average = 0;

    while (i++ < n)
        average += a[i];
    average /= n;
    return average;
}
```

#### (c).

```c
int positives (int a[], int n) {

    int total, i = 0;

    while (i++ < n) {
        if (a[n] > 0)
            total++;
    }

    return total;
```
