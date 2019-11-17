a.out: main.o listaLigada.o
	gcc main.o listaLigada.o
main.o:
	gcc -c -Wall main.c
listaLigada.o:
	gcc -c -Wall listaLigada.c
run: a.out
	./a.out
clear:
	rm -fr a.out main.o listaLigada.o main.c~ listaLigada.c~ listaLigada.h~
indent:
	indent main.c listaLigada.c listaLigada.h
