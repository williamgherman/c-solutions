### Project 22.07

Of the many techniques for compressing the contents of a file, one of the
simplest and fastest is known as **run-length encoding**. This technique
compresses a file by replacing sequences of identical bytes by a pair of bytes:
a repetition count followed by a byte to be repeated. For example, suppose that
the file to be compressed begins with the following sequence of bytes (shown in
hexadecimal):

```
46 6F 6F 20 62 61 72 21 21 21 20 20 20 20 20
```

The compressed file will contain the following bytes:

```
01 46 02 6F 01 20 01 62 01 61 01 72 03 21 05 20
```

Run-length encoding works well if the original file contains many long sequences
of identical bytes. In the worst case (a file with no repeated bytes),
run-length encoding can actually double the length of the file.

(a) Write a program named `compress_file` that uses run-length encoding to
compress a file. To run `compress_file`, we'd use a command of the form

`compress_file` *original-file*

`compress_file` will write the compressed version of *original-file* to
*original-file*`.rle`.

For example, the command

```
compress_file foo.txt
```

will cause `compress_file` to write a compressed version of `foo.txt` to a file
named `foo.txt.rle`. *Hint:* The program described in Programming Project 6
could be useful for debugging.

(b) Write a program named `uncompress_file` that reverses the compression
performed by the `compress_file` program. The `uncompress-file` command will
have the form

`uncompress_file` *compressed-file*

*compressed-file* should have the extension `.rle`. For example, the command

`uncompress_file foo.txt.rle`

will cause `uncompress_file` to open the file `foo.txt.rle` and write an
uncompressed version of its contents to `foo.txt`. `uncompress_file` should
display an error message if its command-line argument doesn't end with the
`.rle` extension.

### Solution

See `compress_file.c` and `uncompress_file.c`.
