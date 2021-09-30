all: madness.o
	gcc -o madness madness.o

madness.o: madness.c
	gcc -c madness.c

run:
	./madness
