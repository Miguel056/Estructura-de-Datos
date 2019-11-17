#ifndef __LISTALIGADA_H__
#define __LISTALIGADA_H__
#include<stdio.h>
#include<stdlib.h>
struct listaLigada
{
  struct listaLigada *siguiente;
  int dato;
};
void agregar (struct listaLigada **, int);
void mostrar (struct listaLigada *);
void eliminar (struct listaLigada **, int);
#endif
