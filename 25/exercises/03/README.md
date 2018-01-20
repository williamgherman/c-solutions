### Exercise 25.03

One of the useful properties of UTF-8 is that no sequence of bytes within a
multibyte character can possibly represent another valid multibyte character.
Does the Shift-JIS encoding for *kanji* (discusses in Exercise 2) have this
property?

### Solution

No. Leaving out the first byte in a multibyte character in Shift-JIS encoding
could print an entirely different character, for example `\x81\x40` is a valid
multibyte character, while `\x40` itself maps to the symbol `@`.
