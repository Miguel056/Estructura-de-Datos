#ifndef __CONTIGUA_H__
#define __CONTIGUA_H__
#include<stdio.h>
#include<stdlib.h>
struct contigua
{
  int *datos;
  int actual;
  int cuantos;
};
void insertar (struct contigua **, int);
void eliminar (struct contigua **, int);
void mostrar (struct contigua *);
#endif
