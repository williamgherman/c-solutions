### Project 9.04
Modify Programming Project 16 from Chapter 8 so that it includes the following
functions:

```c
void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);
```

`main` will call `read_word` twice, once for each of the two words entered by
the user. As it reads a word, `read_word` will use the letters in the word to
update the `counts` array, as described in the original project. (`main` will
declare two arrays, one for each word. These arrays are used to track how many
times each letter occurs in the words.) `main` will then call `equal_array`,
passing it the two arrays. `equal_array` will return `true` if the elements in
the two arrays are identical (indicating that the words are anagrams) and
`false` otherwise.

### Solution
See `4.c`.
