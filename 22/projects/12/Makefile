CC=gcc
CFLAGS=-Wall -Wextra -Wpedantic -std=c99

items: items.o readline.o
	$(CC) -o items items.o readline.o $(CFLAGS)

items.o: items.c readline.h
	$(CC) -c items.c $(CFLAGS)

readline.o: readline.c readline.h
	$(CC) -c readline.c $(CFLAGS)
