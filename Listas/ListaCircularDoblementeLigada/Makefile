a.out: main.o listaCircularDoble.o
	gcc main.o listaCircularDoble.o
main.o:
	gcc -c -Wall main.c
listaCircularDoble.o:
	gcc -c -Wall listaCircularDoble.c
run: a.out
	./a.out
clear:
	rm -fr a.out main.o listaCircularDoble.o main.c~ listaCircularDoble.c~ listaCircularDoble.h~
indent:
	indent main.c listaCircularDoble.c listaCircularDoble.h
