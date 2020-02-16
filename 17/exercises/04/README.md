### Exercise 17.04

Suppose that the following declarations are in effect:

```c
struct point { int x, y; };
struct rectangle { struct point upper_left, lower_right; };
struct rectangle *p;
```

Assume that we want `p` to point to a `rectangle` structure whose upper left
corner is at (10, 25) and whose lower right corner is at (20, 15). Write a
series of statements that allocate such a structure and initialize it as
indicated.

### Solution

```c
p = (struct rectangle *) malloc(sizeof(struct rectangle));
p->upper_left = {10, 25};
p->lower_right = {20, 15};
```
//working version without compiler warnings.
if((p=malloc(sizeof(struct rectangle)))==NULL) exit(EXIT_FAILURE);

p->upper_left.x=10;
p->upper_left.y=25;
p->lower_right.x=20;
p->lower_right.y=15;
