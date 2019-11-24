#include"cola.h"
void
agregar (struct cola **cola, int dato)
{
  struct cola *nuevo = NULL;
  struct cola *anterior = NULL;
  nuevo = (struct cola *) malloc (sizeof (struct cola));
  if (nuevo == NULL)
    {
      return;
    }
  if (*cola == NULL)
    {
      nuevo->dato = dato;
      (*cola) = nuevo;
      (*cola)->siguiente = NULL;
      return;
    }
  anterior = *cola;
  while (anterior->siguiente != NULL)
    {
      anterior = anterior->siguiente;
    }
  nuevo->dato = dato;
  nuevo->siguiente = NULL;
  anterior->siguiente = nuevo;
  return;
}

void
mostrar (struct cola *cola)
{
  struct cola *cola1=NULL;
  if (cola == NULL)
    {
      return;
    }
  struct cola *tmp = NULL;
  tmp = cola;
  while (tmp != NULL)
    {
      agregar (&cola1, tmp->dato);
      tmp = tmp->siguiente;
    }
  while (cola1 != NULL)
    {
      printf ("%d, ", cola1->dato);
      eliminar (&cola1);
    }
}

void
eliminar (struct cola **cola)
{
  struct cola *inicio = NULL;
  struct cola *siguiente = NULL;
  if (*cola == NULL)
    {
      return;
    }
  inicio = *cola;
  siguiente = inicio->siguiente;
  (*cola) = siguiente;
  free (inicio);
}
