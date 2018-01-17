CC=gcc
CFLAGS=-Wall -Wextra -Wpedantic -std=c99

flighttimes: flighttimes.o readline.o
	$(CC) -o flighttimes flighttimes.o readline.o $(CFLAGS)

flighttimes.o: flighttimes.c readline.h
	$(CC) -c flighttimes.c $(CFLAGS)

readline.o: readline.c readline.h
	$(CC) -c readline.c $(CFLAGS)
