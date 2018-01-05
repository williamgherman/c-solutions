CC=gcc
CFLAGS=-Wall -Wextra -Wpedantic -std=c99

stackclient: stackclient.o stackADT3.o
	$(CC) -o stackclient stackclient.o stackADT3.o $(CFLAGS)

stackclient.o: stackclient.c stackADT.h
	$(CC) -c stackclient.c $(CFLAGS)

stackADT3.o: stackADT3.c stackADT.h
	$(CC) -c stackADT3.c $(CFLAGS)
