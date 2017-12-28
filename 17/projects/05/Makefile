CC=gcc
CFLAGS=-Wall -Wextra -Wpedantic -std=c99

sortwords: sortwords.o
	$(CC) -o sortwords sortwords.o $(CFLAGS)

sortwords.o: sortwords.c
	$(CC) -c sortwords.c $(CFLAGS)
