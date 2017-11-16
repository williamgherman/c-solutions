### Project 8.14
Write a program that reverses the words in a sentence:

```
Enter a sentence: you can cage a swallow can't you?
Reversal of sentence: you can't swallow a cage can you?
```

*Hint*: Use a loop to read the characters one by one and store them in a
one-dimensional `char` array. Have the loop stop at a period, question mark, or
exclamation point (the "terminating character"), which is saved in a separate
`char` variable. Then use a second loop to search backward through the array for
the beginning of the last word. Print the last word, then search backward for
the next-to-last word. Repeat until the beginning of the array is reached.
Finally, print the terminating character.

### Solution
See `14.c`.
