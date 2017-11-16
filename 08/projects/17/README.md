### Project 8.17
Write a program that prints an *n* x *n* magic square (a square of the numbers
1, 2, ... n² in which the sums of the rows, columns and diagonals are all the
same). The user will specify the value of *n*:

```
This program creates a magic square of a specified size.
The size must be an odd number between 1 and 99.
Enter size of magic square: 5
   17   24    1    8   15
   23    5    7   14   16
    4    6   13   20   22
   10   12   19   21    3
   11   18   25    2    9
```

Store the magic square in a two-dimensional array. Start by placing the number 1
in the middle of row 0. Place each of the remaining numbers 2, 3, ... *n*² by
moving up one row and over one column. Any attempt to go outside the bounds of
the array should "wrap around" to the opposite side of the array. For example,
instead of storing the ext number in row -1, we would store it in row *n* - 1
(the last row). Instead of storing the next number in column *n*, we would store
it in column 0. If a particular array element is already occupied, put the
number directly below the previously stored number. If your compiler supports
variable-length arraysm declare the array to have *n* rows and *n* columns. If
not, declare the array to have 99 rows and 99 columns.

### Solution
See `17.c`.
