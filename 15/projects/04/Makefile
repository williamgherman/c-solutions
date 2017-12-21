CC=gcc
CFLAGS=-Wall -Wextra -Wpedantic -std=c99

remind: remind.o readline.o
	$(CC) -o remind remind.o readline.o $(CFLAGS)

remind.o: remind.c readline.h
	$(CC) -c remind.c $(CFLAGS)

readline.o: readline.c readline.h
	$(CC) -c readline.c $(CFLAGS)
