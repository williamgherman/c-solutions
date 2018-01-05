CC=gcc
CFLAGS=-Wall -Wextra -Wpedantic -std=c99

queueclient: queueclient.o queueADT.o
	$(CC) -o queueclient queueclient.o queueADT.o $(CFLAGS)

queueclient.o: queueclient.c queue.h
	$(CC) -c queueclient.c $(CFLAGS)

queueADT.o: queueADT.c queue.h
	$(CC) -c queueADT.c $(CFLAGS)
