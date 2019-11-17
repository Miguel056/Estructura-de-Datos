a.out: main.o contigua.o
	gcc main.o contigua.o
contigua.o:
	gcc -c -Wall contigua.c
main.o:
	gcc -c -Wall main.c
run: a.out
	./a.out
clear:
	rm -fr a.out contigua.o main.o contigua.c~ main.c~ contigua.h~
indent: main.c contigua.c contigua.h
	indent main.c contigua.c contigua.h
