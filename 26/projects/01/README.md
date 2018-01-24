### Project 26.01

(a) Write a program that calls the `rand` function 1000 times, printing the
low-order bit of each value it returns (0 if the return value is even, 1 if it's
odd). Do you see any patterns (Often, the last few bits of `rand`'s return value
aren't especially random)?

(b) How can we improve the randomness of `rand` for generating numbers within a
small range?

### Solution

(a) See `1.c`.

(b) Although my output was not extraordinary, the official answer key to this
book (see <http://knking.com/books/c2/answers/c26.html>) states that "`rand() /
(RAND_MAX / N + 1)` often gives bettwe results than `rand() % N`."
