### Exercise 25.02

The Shift-JIS encoding for *kanji* requires either one or two bytes per
character. If the first byte of a character is between `0x81` and `0x9f` or
between `0xe0` and `0xef`, a second byte is required (Any other byte is treated
as a whole character). The second byte must be between `0x40` and `0x7e` or
between `0x80` and `0xfc` (All ranges are inclusive). For each of the following
strings, give the value that the `mbcheck` function of Section 25.2 will return
when passed that string as its argument, assuming that multibyte characters are
encoded using Shift-JIS in the current locale.

(a) `"\x05\x87\x80\x36\x3d\xaa"`  
(b) `"\x20\xe4\x50\x88\x3f"`  
(c) `"\xde\xad\xbe\xef"`  
(d) `"\x8a\x60\x92\x74\x41"`

### Solution

(a) `0`  
(b) `-1`  
(c) `-1`  
(d) `-1` (two errors: `\x8a` and `\x92`)
