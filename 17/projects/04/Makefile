CC=gcc
CFLAGS=-Wall -Wextra -Wpedantic -std=c99

justify: justify.o line.o word.o
	$(CC) -o justify justify.o line.o word.o $(CFLAGS)

justify.o: justify.c line.h word.h
	$(CC) -c justify.c $(CFLAGS)

line.o: line.c line.h
	$(CC) -c line.c $(CFLAGS)

word.o: word.c word.h
	$(CC) -c word.c $(CFLAGS)
