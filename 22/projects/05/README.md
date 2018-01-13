### Project 22.05

The `xor.c` program of Section 20.1 refuses to encrypt bytes that -- in original
or encrypted form -- are control characters. We can now remove this restriction.
Modify the program so that the names of the input and output files are
command-line arguments. Open both files in binary mode, and remove the test that
checks whether the original and encrypted characters are printing characters.

### Solution

See `xor.c`.
