### Exercise 17.13

The following function is supposed to insert a new node into its proper place in
an ordered list, returning a pointer to the first node in the modified list.
Unfortunately, the function doesn't word correctly in all cases. Explain what's
wrong with it and show how to fix it. Assume that the `node` structure is the
one defined in Section 17.5.

```c
struct node *insert_into_ordered_list(struct node *list, struct node *new_node)
{
    struct node *cur = list, *prev = NULL;
    while (cur->value <= new_node->value) {
        prev = cur;
        cur = cur->next;
    }
    prev->next = new_node;
    new_node->next = cur;
    return list;
}
```

### Solution

The function does not handle the edge cases when the new node must be inserted
before the first item in the list (when `prev` is `NULL`) and when the new node
must be inserted after the last item in the list (when `cur` is `NULL`). One
solution is to use a pointer to a pointer to a list, which would also remove the
necessity of having two variables to insert the new node:

```c
struct node *insert_into_ordered_list(struct node *list, struct node *new_node)
{
    struct node **pp = &list;
    while (list != NULL) {
        if (list->value >= new_node->value)
            break;
        pp = &list->next;
        list = list->next;
    }
    *pp = new_node;
    new_node = list;
}
```
