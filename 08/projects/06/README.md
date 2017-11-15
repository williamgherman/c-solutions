### Project 8.06
The prototypical Internet newbie is a fellow named BIFF, who has a unique way of
writing messages. Here's a typical BIFF communiqué:

```
H3Y DUD3, C 15 R1LLY C00L!!!!!!!!!!
```

Write a "BIFF filter" that reads a message entered by the user and translates it
into BIFF-speak:

```
Enter message: Hey dude, C is rilly cool
In B1FF-speak: H3Y DUD3, C 15 R1LLY C00L!!!!!!!!!!
```

Your program should convert the message to upper-case letters, substitute digits
for certain letters (A→4, B→8, E→3, I→1, O→0, S→5), and then append 10 or so
exclamation marks. *Hint*: Store the original message in an array of characters,
then go back through the array, translating and printing characters one by one.

### Solution
See `6.c`.
