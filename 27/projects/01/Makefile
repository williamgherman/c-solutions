CC=gcc
CFLAGS=-Wall -Wextra -Wpedantic -std=c99 -lm

quadratic: quadratic.o
	$(CC) -o quadratic quadratic.o $(CFLAGS)

quadratic.o: quadratic.c
	$(CC) -c quadratic.c $(CFLAGS)
