### Exercise 17.07

The following loop is supposed to delete all nodes from a linked list and
release the memory they occupy. Unfortunately, the loop is incorrect. Explain
what's wrong with it and show how to fix the bug.

```c
for (p = first; p != NULL; p = p->next)
    free(p);
```

### Solution

The loop frees `p` then attempts to set `p` to its `next` member, which is
deallocated. One way to fix this is to create a pointer to the following node,
then assign `p` to it once `p` has been deallocated:

```c
struct node *next_node;

while (p != NULL) {
    next_node = p->next;
    free(p);
    p = next_node;
}
```
