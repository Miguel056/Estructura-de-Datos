#ifndef __ARBOL_H__
#define __ARBOL_H__
#include<stdio.h>
#include<stdlib.h>
struct arbol
{
  int dato;
  struct arbol *derecho;
  struct arbol *izquierdo;
};
struct arbol *insertar (struct arbol *, int);
void mostrar (struct arbol *);
struct arbol *buscarHijo (struct arbol *, int);
struct arbol *buscarPadre (struct arbol *, struct arbol *, int);
struct arbol *buscarMenorMayores (struct arbol *);
struct arbol *buscarMayorMenores (struct arbol *);
struct arbol *eliminar (struct arbol *, int);
#endif
