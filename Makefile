main.o: main.c
	gcc -c main.c
launch: main.o
	gcc main.o  -o launch
