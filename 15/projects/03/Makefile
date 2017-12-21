CC=gcc
CFLAGS=-Wall -Wextra -Wpedantic -std=c99

qsort: qsort.o quicksort.o
	$(CC) -o qsort qsort.o quicksort.o $(CFLAGS)

qsort.o: qsort.c quicksort.h
	$(CC) -c qsort.c $(CFLAGS)

quicksort.o: quicksort.c quicksort.h
	$(CC) -c quicksort.c $(CFLAGS)
