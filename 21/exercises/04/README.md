### Exercise 21.04

Make a list of all reserved identifiers in the "future library directions"
section of the C99 standard. Distinguish between identifiers that are reserved
for use only when a specific header is included versus identifiers that are
reserved for use as external names.

### Solution

All of the following information has been taken directly from the ISO/IEC
9899:1999 standard (C99 standard).

#### complex.h

```
cerf
cerfc
cexp2
cexpm1
clog10
clog1p
clog2
clgamma
ctgamma
```

As well as all of the above names suffixed with `f` or `l`.


#### ctype.h

Names beginning with `is` or `to` followed by a lowercase letter.

#### errno.h

Names beginning with `E` and either a digit or uppercase letter.

#### inttypes.h

Names beginning with `PRI` or `SCN` followed by a lowercase letter or `X`.

#### locale.h

Names beginning with `LC_` and an uppercase letter.

#### signal.h

Names beginning with `SIG` or `SIG_` followed by an uppercase letter.

#### stdbool.h

`bool`, `true` and `false`.

#### stdint.h

Names beginning with `int` or `uint` and ending with `_t`, as well as names
beginning with `INT` or `UNIT` and ending in `_MAX`, `_MIN` or `_C`.

#### stdio.h

Lowercase letters which may be added to the conversion specifiers and length
modifiers in `fprintf` and `fscanf`. `gets` is obsolescent and deprecated, and
`ungetc` used on a binary stream where the file position indicated is zero prior
to the call is obsolescent.

#### stdlib.h

Names beginning with `str` and an uppercase letter.

#### string.h

Names beginning with `str`, `mem` or `wcs` and a lowercase letter.

#### wchar.h

Names beginning with `wcs` and a lowercase letter. Lowercase letters may be
added to the conversion specifiers and length modifiers in `fwprintf` and
`fwscanf`. Other characteres may be used in extensions.

#### wctype.h

Names beginning with `is` or `to` and a lowercase letter.
