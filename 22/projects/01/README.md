### Project 22.01

Extend the `canopen.c` program of Section 22.2 so that the user may put any
number of file names on the command line:

```
canopen foo bar baz
```

The program should print a separate `can be opened` or `can't be opened` message
for each file. Have the program terminate withe status `EXIT_FAILURE` if one or
more of the files can't be opened.

### Solution

See `1.c`.
