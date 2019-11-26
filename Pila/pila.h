#ifndef __PILA_H__
#define __PILA_H__
#include<stdio.h>
#include<stdlib.h>
struct pila
{
  int dato;
  struct pila *siguiente;
  struct pila *anterior;
};
void push (struct pila **, int);
void mostrar (struct pila *);
void pop (struct pila **);
#endif
