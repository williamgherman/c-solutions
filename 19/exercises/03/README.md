### Exercise 19.03

(a) Write an array based implementation of the queue module described in
Exercise 1. Use three integers to keep track of the queue's status, with one
integer storing the position of the first empty slot in the array (used when an
item is inserted), the second storing the position of the next item to be
removed, and the third storing the number of items in the queue. An isertion or
removal that would caused either of the first two integers to be incremented
past the end of the array should instead reset the variable to zero, thus
causing it to "wrap around" to the beginning of the array.

(b) Write a linked-list implementation of the queue module described in
Exercise 1. Use two pointers, one pointing to the first node in the list and the
other pointing to the last node. When an item is inserted into the queue, add it
to the end of the list. When an item is removed from the queue, delete the first
node in the list.

### Solution

#### (a)

See `queue.c`.

#### (b)

See `queue2.c`.  
