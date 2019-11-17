a.out: main.o listaDobleLigada.o
	gcc main.o listaDobleLigada.o
main.o:
	gcc -c -Wall main.c
listaDobleLigada.o:
	gcc -c -Wall listaDobleLigada.c
run: a.out
	./a.out
clear:
	rm -fr a.out main.o listaDobleLigada.o main.c~ listaDobleLigada.c~ listaDobleLigada.h~
indent:
	indent main.c listaDobleLigada.c listaDobleLigada.h
