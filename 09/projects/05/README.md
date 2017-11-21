### Project 9.05
Modify Programming Project 17 from Chapter 8 so that it includes the following
functions:

```c
void create_magic_square(int n, char magic_square[n][n]);
void print_magic_square(int n, char magic_square[n][n]);
```

After obtaining the number *n* from the user, `main` will call
`create_magic_square`, passing it an *n* x *n* array that is declared inside
`main`. `create_magic_square` will fil the array with the numbers 1, 2, ...,
*n*² as described in the original project. `main` will then call
`print_magic_square`, which will display the array in the format described in
the oroginal project. *Note*: If your compiler doesn't support variable-length
arrays, declare the array in `main` to be 99 x 99 instead of *n* x *n* and use
the following prototypes instead:

```c
void create_magic_square(int n, char magic_square[99][99]);
void print_magic_square(int n, char magic_square[99][99]);
```

### Solution
See `5.c`. Note that the usage of `char` for the magic square will limit the
output to an 11 x 11 square max size, otherwise `char` will overflow. 
