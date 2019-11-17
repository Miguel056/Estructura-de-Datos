a.out: main.o pila.o
	gcc main.o pila.o
main.o:
	gcc -c -Wall main.c
pila.o:
	gcc -c -Wall pila.c
run: a.out
	./a.out
clear:
	rm -fr a.out main.o pila.o pila.c~ main.c~ pila.h~
indent: main.c pila.c pila.h
	indent main.c pila.c pila.h
