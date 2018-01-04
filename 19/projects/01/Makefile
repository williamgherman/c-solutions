CC=gcc
CFLAGS=-Wall -Wextra -Wpedantic -std=c99

stackclient: stackclient.o stack.o
	$(CC) -o stackclient stackclient.o stack.o $(CFLAGS)

stackclient.o: stackclient.c stack.h
	$(CC) -c stackclient.c $(CFLAGS)

stack.o: stack.c stack.h
	$(CC) -c stack.c $(CFLAGS)
