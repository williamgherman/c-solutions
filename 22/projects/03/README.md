### Project 22.03

Write a program named `fcat` that "concatenates" any number of files by writing
them to standard output, one after the other, with no break between files. For
example, the following command will display the files `f1.c`, `f2.c` and `f3.c`
on the screen:

```
fcat f1.c f2.c f3.c
```

`fcat` should issue an error message if any file can't be opened. *Hint:* Since
it has no more than one file open at a time, `fcat` needs only a single file
pointer variable. Once it's finished with a file `fcat` can use the same
variable when it opens the next file.

### Solution

See `fcat.c`.
