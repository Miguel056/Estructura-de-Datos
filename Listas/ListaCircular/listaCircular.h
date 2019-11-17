#ifndef __LISTACIRCULAR_H__
#define __LISTACIRCULAR_H__
#include<stdio.h>
#include<stdlib.h>
struct listaCircular
{
  int dato;
  struct listaCircular *siguiente;
};
void agregar (struct listaCircular **, int);
void eliminar (struct listaCircular **, int);
void mostrar (struct listaCircular *);
#endif
