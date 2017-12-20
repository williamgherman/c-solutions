inventory: inventory.o readline.o quicksort.o
	gcc -o inventory inventory.o readline.o quicksort.o

inventory.o: inventory.c inventory.h readline.h quicksort.h
	gcc -c inventory.c

readline.o: readline.c readline.h
	gcc -c readline.c

quicksort.o: quicksort.c quicksort.h inventory.h
	gcc -c quicksort.c
