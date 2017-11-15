### Exercise 8.02
The Q&A section shows how to use a *letter* as an array subscript. Describe how
to use a *digit* (in character form) as a subscript.

### Solution
If `c` is a `char` containing a digit character `'5'`:

`digit_count[c - '0'] == digit_count[5]; /* true */`
