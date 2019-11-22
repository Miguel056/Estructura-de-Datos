#ifndef __ARBOL_H__
#define __ARBOL_H__
#include<stdio.h>
#include<stdlib.h>
struct arbol{
	int dato;
	struct arbol *derecho;
	struct arbol *izquierdo;
};
struct arbol * insertar(struct arbol *,int );
void mostrar(struct arbol *);
#endif
