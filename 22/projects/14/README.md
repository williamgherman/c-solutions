### Project 22.14

Modify Programming Project 15 from Chapter 8 so that the program prompts the
user to enter the name of a file containing the message to be encrypted:

```
Enter name of file to be encrypted: message.txt
Enter shift amount (1-25): 3
```

The program then writes the encrypted message to a file with the same name but
an added extension of `.enc`. In this example, the original file name is
`message.txt`, so the encrypted message will be stored in a file named
`message.txt.enc`. There's no limit on the size of the file to be encrypted or
on the length of each line in the file.

### Solution

See `encrypt.c`.
