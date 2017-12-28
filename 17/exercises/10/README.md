### Exercise 17.10

Modify the `print_part` function of Section 16.2 so that is parameter is a
*pointer* to a `part` structure. Use the `->` operator in your answer.

### Solution

```c
void print_part(struct part *p)
{
    printf("Part number: %d\n", p->number);
    printf("Part name: %s\n", p->name);
    printf("Quantity on hand: %d\n", p->on_hand);
}
```
