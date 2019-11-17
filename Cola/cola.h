#ifndef __COLA_H__
#define __COLA_H__

#include<stdio.h>
#include<stdlib.h>
struct cola
{
  int dato;
  struct cola *siguiente;
};
void agregar (struct cola **, int);
void mostrar (struct cola *);
void eliminar (struct cola **cola);
#endif
