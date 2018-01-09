### Exercise 21.06

The `<ctype.h>` header usually defines most of its functions as macros as well.
These macros rely on a static array that's declared in `<ctype.h>` but defined
in a separate file. A portion of a typical `<ctype.h>` header appears below. Use
this sample to answer the following questions.

(a) Why do the names of the "bit" macros (such as `_UPPER`) and the `_ctype`
array begin with an underscore?

(b) Explain what the `_ctype` array will contain. Assuming that the character
set is ASCII, show the values of the array elements at positions 9 (the
horizontal tab character), 32 (the space character), 65 (the letter `A`) and 94
(the `^` character). See Section 23.5 for a description of what each macro
should return.

(c) What's the advantage of using an array to implement these macros?

```c
#define _UPPER   0x01   /* upper-case letter */
#define _LOWER   0x02   /* lower-case letter */
#define _DIGIT   0x04   /* decimal digit */
#define _CONTROL 0x08   /* control character */
#define _PUNCT   0x10   /* punctuation character */
#define _SPACE   0x20   /* white-space character */
#define _HEX     0x40   /* hexadecimal digit */
#define _BLANK   0x80   /* space character */

#define isalnum(c)  (_ctype[c] & (_UPPER|_LOWER|_DIGIT))
#define isalpha(c)  (_ctype[c] & (_UPPER|_LOWER))
#define iscntrl(c)  (_ctype[c] & _CONTROL)
#define isdigit(c)  (_ctype[c] & _DIGIT)
#define isgraph(c)  (_ctype[c] &
                      (_PUNCT|_UPPER|_LOWER|_DIGIT))
#define islower(c)  (_ctype[c] & _LOWER)
#define isprint(c)  (_ctype[c] &
                      (_BLANK|_PUNCT|_UPPER|_LOWER|_DIGIT))
#define ispunct(c)  (_ctype[c] & _PUNCT)
#define isspace(c)  (_ctype[c] & _SPACE)
#define isupper(c)  (_ctype[c] & _UPPER)
#define isxdigit(c) (_ctype[c] & (_DIGIT|_HEX))
```

### Solution

#### (a)

Two reasons: macro names beginning with an underscore and a capital letter are
reserved for use in the standard library; and, the C standard states that
standard header files must not reuse names of macros contained within.

#### (b)

The `_ctype` array will contain bitfields of length 8 which describe the
properties of the characters passed into them.

`_ctype[9]` is a whitespace character and will have bit 5 set: `0010_0000`.  
`_ctype[32]` will likewise be defined as a whitespace character: `0010_0000`.
`_ctype[65]` is an uppercase character, having its 0 bit set: `0000_0001`.
`_ctype[94]` is a punctuation character, having its bit 4 set: `0001_0000`.

#### (c)

By using an array, lookup times will be fast, no calculations will need to be
performed, and macro parameters wlil only need to be evaluated once.
