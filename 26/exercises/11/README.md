### Exercise 26.11

Although the `bsearch` function is normally used with a sorted array, it will
sometimes work correctly with an array that is only partially sorted. What
condition must an array satisfy to guarantee that `bsearch` works properly for a
particular key? *Hint:* The answer appears in the C standard.

### Solution

For a standard binary search algorithm to function correctly with a given key,
the array only needs to have the elements used for comparisons in their proper
positions. For example, the following partially sorted array will work when the
binary search is told to look for the key `3`:

```
1 2 3 4 5 9 8 7 6 10
```

The search works because the first and last keys are compared, the middle key is
computed, and all of the keys in the first half of the array are used for
comparisons to find `3`.
