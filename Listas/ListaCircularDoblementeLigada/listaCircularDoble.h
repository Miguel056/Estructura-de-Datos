#ifndef __LISTACIRCULARDOBLE_H__
#define __LISTACIRCULARDOBLE_H__
#include<stdio.h>
#include<stdlib.h>
struct listaCircularDoble
{
  int dato;
  struct listaCircularDoble *siguiente;
  struct listaCircularDoble *anterior;
};
void agregar (struct listaCircularDoble **, int);
void mostrar (struct listaCircularDoble *);
void eliminar (struct listaCircularDoble **, int);
#endif
