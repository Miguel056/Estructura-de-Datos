#ifndef __listaDobleLigada_H__
#define __listaDobleLigada_H__
#include<stdio.h>
#include<stdlib.h>
struct listaLigadaDoble
{
  int dato;
  struct listaLigadaDoble *siguiente;
  struct listaLigadaDoble *anterior;
};
void agregar (struct listaLigadaDoble **, int);
void mostrar (struct listaLigadaDoble *);
void eliminar (struct listaLigadaDoble **, int);
#endif
