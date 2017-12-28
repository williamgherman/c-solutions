CC=gcc
CFLAGS=-Wall -Wextra -Wpedantic -std=c99

inventory2: inventory2.o readline.o
	$(CC) -o inventory2 inventory2.o readline.o $(CFLAGS)

inventory.o: inventory.c readline.h
	$(CC) -c inventory.c $(CFLAGS)

readline.o: readline.c readline.h
	$(CC) -c readline.c $(CFLAGS)
