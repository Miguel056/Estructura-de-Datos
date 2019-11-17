a.out: main.o listaCircular.o
	gcc main.o listaCircular.o
main.o:
	gcc -c -Wall main.c
listaCircular.o:
	gcc -c -Wall listaCircular.c
run: a.out
	./a.out
clear:
	rm -fr a.out main.o listaCircular.o main.c~ listaCircular.c~ listaCircular.h~
indent:
	indent main.c listaCircular.c listaCircular.h
