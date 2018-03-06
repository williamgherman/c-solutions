# c-solutions
My ***complete*** solutions to the exercises in K. N. King's "C Programming: A
Modern Approach", second edition. 

<p align="center">
<img src="cover.jpg" width="203" height="250"/>
</p>

## Information

The solutions to the exercises are complete, including the first exercises on
chapter 2 to the last program of chapter 27. Modified code from the book has
been included under fair use and with the explicit copyright notice included in
relevant files.

My solutions aim to be as complete as possible with little ambiguity or
cluttering. The complete exercise questions will also be provided, and the
solutions will be compiled as directed from the book.

All testing was done on a x86\_64 Linux system running GCC 7.2.0 or greater. The
compiler has been set to run the C89 or C99 standard unless otherwise noted:

```bash
$ gcc filename.c -o filename.o -Wall -Wextra -Wpedantic -std=c89
$ gcc filename.c -o filename.o -Wall -Wextra -Wpedantic -std=c99
```

Note that for all exercises or projects that require the `<math.h>` header,
linkage in gcc is required, i.e., to use the `-lm` option. `Makefile`s are
provided for such programs, and `Makefile`s are also provided for projects
consisting of multiple files.

## License

Code from the book has the copyright notice as stated in `book-notice.txt`.

<a rel="license" href="http://creativecommons.org/licenses/by/4.0/"><img
alt="Creative Commons License" style="border-width:0"
src="https://i.creativecommons.org/l/by/4.0/88x31.png" /></a><br />This work is
licensed under a <a rel="license"
href="http://creativecommons.org/licenses/by/4.0/">Creative Commons Attribution
4.0 International License</a>.
