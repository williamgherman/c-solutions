### Exercise 13.12
Write the following function:

```c
void get_extension(const char *file_name, char *extension);
```

`file_name` points to a string containing a file name. The function should store
the extension on the file name in the string pointed to by `extension`. For
example, if the file name is `"memo.txt"`, the function will store `"txt"` in
the string pointed to by `extension`. If the file name doesn't have an
extension, the function should store an empty string (a single null character)
in the string pointed to by `extension`. Keep the function as simple as possible
by having it use the `strlen` and `strcpy` functions.

### Solution

```c
void get_extension(const char *file_name, char *extension) {

    while (*file_name) {
        if (*file_name++ == '.') {
            strcpy(extension, file_name);
            return;
        }
    }
    strcpy(extension, "");
}
```

NB: Some problems would arise by using this function: for instance, a filename
with the value `"memo.txt.html"` would incorrectly copy `"txt.html"` to
`extension`.
