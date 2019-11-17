#include"listaCircularDoble.h"
void
agregar (struct listaCircularDoble **lista, int dato)
{
  struct listaCircularDoble *nuevo = NULL;
  struct listaCircularDoble *anterior = NULL;
  if (*lista == NULL)
    {
      nuevo =
	(struct listaCircularDoble *)
	malloc (sizeof (struct listaCircularDoble));
      if (nuevo == NULL)
	{
	  return;
	}
      nuevo->dato = dato;
      (*lista) = nuevo;
      (*lista)->siguiente = *lista;
      (*lista)->anterior = *lista;
      return;
    }
  anterior =
    (struct listaCircularDoble *) malloc (sizeof (struct listaCircularDoble));
  nuevo =
    (struct listaCircularDoble *) malloc (sizeof (struct listaCircularDoble));
  if (anterior == NULL || nuevo == NULL)
    {
      return;
    }
  anterior = (*lista)->anterior;
  nuevo->dato = dato;
  anterior->siguiente = nuevo;
  nuevo->siguiente = *lista;
  nuevo->anterior = anterior;
  (*lista)->anterior = nuevo;
  return;
}

void
mostrar (struct listaCircularDoble *lista)
{
  if (lista == NULL)
    {
      return;
    }
  struct listaCircularDoble *tmp = NULL;
  struct listaCircularDoble *tmp1 = NULL;
  tmp =
    (struct listaCircularDoble *) malloc (sizeof (struct listaCircularDoble));
  tmp1 =
    (struct listaCircularDoble *) malloc (sizeof (struct listaCircularDoble));
  if (tmp == NULL || tmp1 == NULL)
    {
      return;
    }
  tmp = lista;
  tmp1 = lista;
  while (tmp->siguiente != tmp1)
    {
      printf ("%d, ", tmp->dato);
      tmp = tmp->siguiente;
      if (tmp->siguiente == tmp1)
	{
	  printf ("%d", tmp->dato);
	}
    }
  return;
}

void
eliminar (struct listaCircularDoble **lista, int dato)
{
  if (*lista == NULL)
    {
      return;
    }
  struct listaCircularDoble *tmp = NULL;
  struct listaCircularDoble *tmp1 = NULL;
  struct listaCircularDoble *anterior = NULL;
  struct listaCircularDoble *siguiente = NULL;
  struct listaCircularDoble *act = NULL;
  int aux = 0;
  tmp =
    (struct listaCircularDoble *) malloc (sizeof (struct listaCircularDoble));
  act =
    (struct listaCircularDoble *) malloc (sizeof (struct listaCircularDoble));
  tmp1 =
    (struct listaCircularDoble *) malloc (sizeof (struct listaCircularDoble));
  anterior =
    (struct listaCircularDoble *) malloc (sizeof (struct listaCircularDoble));
  siguiente =
    (struct listaCircularDoble *) malloc (sizeof (struct listaCircularDoble));
  if (tmp == NULL || act == NULL || tmp1 == NULL || anterior == NULL
      || siguiente == NULL)
    {
      return;
    }
  tmp = *lista;
  tmp1 = *lista;
  while (tmp->siguiente != tmp1)
    {
      if (tmp->dato == dato)
	{
	  act = tmp;
	  aux = 1;
	}
      tmp = tmp->siguiente;
      if (tmp->siguiente == tmp1)
	{
	  if (tmp->dato == dato)
	    {
	      act = tmp;
	      aux = 1;
	    }
	}
    }
  if (aux == 0)
    {
      return;
    }
  if (act == *lista)
    {
      anterior = act->anterior;
      siguiente = act->siguiente;
      (*lista) = siguiente;
      (*lista)->anterior = anterior;
      anterior->siguiente = *lista;
      free (act);
      return;
    }
  siguiente = act->siguiente;
  anterior = act->anterior;
  anterior->siguiente = siguiente;
  siguiente->anterior = anterior;
  free (act);
  return;
}
