a.out: main.o arbol.o
  gcc main.o arbol.o
main.o:
  gcc -c -Wall main.c
arbol.o:
  gcc -c -Wall arbol.c
run: a.out
  ./a.out
clear:
  rm -fr a.out main.o arbol.o main.c~ arbol.c~ arbol.h~
indent:
  indent main.c arbol.c arbol.h
