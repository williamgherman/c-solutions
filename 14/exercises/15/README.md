### Exercise 14.15

Suppose that a program needs to display messages in either English, French or
Spanish. Using a condition compilation, write a program fragment that displays
one of the following three messages, depending on whether or not the specified
macro is defined:

```
Insert Disk 1       (if ENGLISH is defined)
Inserez Le Disque 1 (if FRENCH is defined)
Inserte El Disco 1  (if SPANISH is defined)
```

### Solution

```c
#if defined(FRENCH)
#define INSERT_DISK "Inserez Le Disque 1"
#
#elif defined(SPANISH)
#define INSERT_DISK "Inserte El Disco 1"
#
#else
#define INSERT_DISK "Insert Disk 1"
#
#endif

printf("%s\n", INSERT_DISK);
```
