CC=gcc
CFLAGS=-Wall -Wpedantic -Wextra -std=c99

inventory2: inventory2.o readline.o
	$(CC) -o inventory2 inventory2.o readline.o $(CFLAGS)

inventory2.o: inventory2.c readline.h
	$(CC) -c inventory2.c $(CFLAGS)

readline.o: readline.c readline.h
	$(CC) -c readline.c $(CFLAGS)
