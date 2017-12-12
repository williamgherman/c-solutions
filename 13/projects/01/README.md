### Project 13.01

Write a program that finds the "smallest" and "largest" in a series of words.
After the user enters the words, the program will determine which words would
come first and last if the words were listed in dictionary order. The program
must stop accepting input when the user wnters a four-letter words. Assume that
no word is more than 20 letters long. An interactive session with the program
might look like this:

```
Enter word: dog
Enter word: zebra
Enter word: rabbit
Enter word: catfish
Enter word: walrus
Enter word: cat
Enter word: fish

Smallest word: cat
Largest word: zebra
```

*Hint*: Use two strings named `smallest_word` and `largest_word` to keep track
of the "smallest" and "largest" words entered so far. Each time the user enters
a word, use `strcmp` to compare it with `smallest_word`; if the new word is
"smaller", use `strcpy` to save it in `smallest_word`. Do a similar comparison
with `largest_word`. Use `strlen` to determine when the user has entered a
four-letter word.

### Solution
See `1.c`.
