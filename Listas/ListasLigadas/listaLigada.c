#include "listaLigada.h"
void
agregar (struct listaLigada **lista, int dato)
{
  struct listaLigada *nuevo = NULL;
  struct listaLigada *anterior = NULL;
  if ((*lista) == NULL)
    {
      nuevo = (struct listaLigada *) malloc (sizeof (struct listaLigada));
      if (nuevo == NULL)
	{
	  return;
	}
      nuevo->dato = dato;
      struct listaLigada *aux2 = NULL;
      *lista = nuevo;
      (*lista)->siguiente = aux2;
      return;
    }
  anterior = (struct listaLigada *) malloc (sizeof (struct listaLigada));
  nuevo = (struct listaLigada *) malloc (sizeof (struct listaLigada));
  if (nuevo == NULL || anterior == NULL)
    {
      return;
    }
  nuevo->dato = dato;
  nuevo->siguiente = NULL;
  anterior = *lista;
  while (anterior->siguiente != NULL)
    {
      anterior = anterior->siguiente;
    }
  anterior->siguiente = nuevo;
  return;
}

void
mostrar (struct listaLigada *lista)
{
  if (lista == NULL)
    {
      return;
    }
  struct listaLigada *tmp = NULL;
  tmp = (struct listaLigada *) malloc (sizeof (struct listaLigada));
  if (tmp == NULL)
    {
      return;
    }
  tmp = lista;
  while (tmp != NULL)
    {
      printf ("%d ", tmp->dato);
      tmp = tmp->siguiente;
    }
}

void
eliminar (struct listaLigada **lista, int dato)
{
  struct listaLigada *tmp;
  struct listaLigada *act;
  struct listaLigada *anterior;
  struct listaLigada *siguiente;
  int aux = 0;
  if (*lista == NULL)
    {
      return;
    }
  tmp = (struct listaLigada *) malloc (sizeof (struct listaLigada));
  act = (struct listaLigada *) malloc (sizeof (struct listaLigada));
  if (act == NULL || tmp == NULL)
    {
      return;
    }
  tmp = *lista;
  while (tmp != NULL)
    {
      if (tmp->dato == dato)
	{
	  act = tmp;
	  aux = 1;
	}
      tmp = tmp->siguiente;
    }
  if (aux == 0)
    {
      return;
    }
  if (act == (*lista))
    {
      siguiente = (struct listaLigada *) malloc (sizeof (struct listaLigada));
      if (siguiente == NULL)
	{
	  return;
	}
      siguiente = act->siguiente;
      (*lista) = siguiente;
      free (act);
      return;
    }
  tmp = *lista;
  anterior = (struct listaLigada *) malloc (sizeof (struct listaLigada));
  siguiente = (struct listaLigada *) malloc (sizeof (struct listaLigada));
  if (siguiente == NULL || anterior == NULL)
    {
      return;
    }
  while (tmp != act)
    {
      anterior = tmp;
      tmp = tmp->siguiente;
    }
  siguiente = act->siguiente;
  anterior->siguiente = siguiente;
  free (act);
  return;
}
