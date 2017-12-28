CC=gcc
CFLAGS=-Wall -Wextra -Wpedantic -std=c99

remind2: remind2.o
	$(CC) -o remind2 remind2.o $(CFLAGS)

remind2.o: remind2.c
	$(CC) -c remind2.c $(CFLAGS)
