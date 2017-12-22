### Exercise 17.06

Modify the `delete_from_list` function so that is uses only one pointer variable
instead of two (`cur` and `prev`).

### Solution

```c
struct node *delete_from_list(struct node **list, int n) {
    struct node *item = *list;
    while (item) {
        if (item->value == n) {
            *list = item->next;
            free(item);
            break;
        }
        list = &item->next;
        item = item->next;
    }
    return *list;
}
```
