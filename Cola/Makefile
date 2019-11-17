a.out: main.o cola.o
	gcc main.o cola.o
main.o:
	gcc -c -Wall main.c
cola.o:
	gcc -c -Wall cola.c
run: a.out
	./a.out
clear:
	rm -fr a.out main.o cola.o cola.c~ main.c~ cola.h~
indent: main.c cola.c cola.h
	indent main.c cola.c cola.h
