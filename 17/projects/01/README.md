### Project 17.01

Modify the `inventory.c` program of Section 16.3 so that the `inventory` array
is allocated dynamically and later reallocated when it fills up. Use `malloc`
initially to allocate enough space for an array of 10 `part` structures. When
the array has no more room for new parts, use `realloc` to double its size.
Repeat the double step each time the array becomes full.

### Solution

See `1.c`.
