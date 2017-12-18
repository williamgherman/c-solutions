calc: calc.o stack.o
	gcc -o calc calc.o stack.o

calc.o: calc.c stack.h
	gcc -c calc.c

stack.o: stack.c stack.h
	gcc -c stack.c
