CC=gcc
CFLAGS=-Wall -Wextra -Wpedantic -std=c99

justify: justify.o word.o line.o
	$(CC) -o justify justify.o word.o line.o $(CFLAGS)

justify.o: justify.c word.h line.h
	$(CC) -c justify.c $(CFLAGS)

word.o: word.c word.h
	$(CC) -c word.c $(CFLAGS) 

line.o: line.c line.h
	$(CC) -c line.c $(CFLAGS)
