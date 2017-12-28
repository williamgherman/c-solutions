### Exercise 17.11

Write the following function

```c
int count_occurrences(struct node *list, int n);
```

The `list` parameter points to a linked list; the function should return the
number of times that `n` appears in this list. Assume that the `node` structure
is the one defined in Section 17.5.

### Solution

```c
int count_occurrences(struct node *list, int n) {
    int sum = 0;
    while (list != NULL) {
        if (list->value == n)
            sum++;
        list = list->next;
    }
    return sum;
}
```
