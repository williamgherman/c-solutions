CC=gcc
CFLAGS=-Wall -Wextra -Wpedantic -std=c99

calc: calc.o stack.o
	$(CC) -o calc calc.o stack.o $(CFLAGS)

calc.o: calc.c stack.h
	$(CC) -c calc.c $(CFLAGS)

stack.o: stack.c stack.h
	$(CC) -c stack.c $(CFLAGS)
