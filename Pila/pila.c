#include"pila.h"
void
push (struct pila **pila, int dato)
{
  struct pila *nuevo = NULL;
  struct pila *anterior = NULL;
  anterior = (struct pila *) malloc (sizeof (struct pila));
  nuevo = (struct pila *) malloc (sizeof (struct pila));
  if (nuevo == NULL || anterior == NULL)
    {
      return;
    }
  if (*pila == NULL)
    {
      nuevo->dato = dato;
      (*pila) = nuevo;
      (*pila)->siguiente = NULL;
      return;
    }
  anterior = *pila;
  nuevo->dato = dato;
  nuevo->siguiente = anterior;
  (*pila) = nuevo;
  return;
}

void
mostrar (struct pila *pila)
{
  if (pila == NULL)
    {
      return;
    }
  struct pila *tmp = NULL;
  tmp = (struct pila *) malloc (sizeof (struct pila));
  if (tmp == NULL)
    {
      return;
    }
  tmp = pila;
  while (tmp != NULL)
    {
      printf ("%d ", tmp->dato);
      tmp = tmp->siguiente;
    }
}

void
pop (struct pila **pila)
{
  struct pila *tope = NULL;
  struct pila *siguiente = NULL;
  if (*pila == NULL)
    {
      return;
    }
  tope = (struct pila *) malloc (sizeof (struct pila));
  siguiente = (struct pila *) malloc (sizeof (struct pila));
  if (tope == NULL || siguiente == NULL)
    {
      return;
    }
  tope = *pila;
  siguiente = tope->siguiente;
  (*pila) = siguiente;
  free (tope);
}
