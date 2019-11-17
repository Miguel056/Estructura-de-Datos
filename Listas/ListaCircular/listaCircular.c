#include"listaCircular.h"
void
agregar (struct listaCircular **lista, int dato)
{
  struct listaCircular *nuevo;
  struct listaCircular *tmp;
  struct listaCircular *anterior;
  if (*lista == NULL)
    {
      nuevo = (struct listaCircular *) malloc (sizeof (struct listaCircular));
      if (nuevo == NULL)
	{
	  return;
	}
      nuevo->dato = dato;
      *lista = nuevo;
      (*lista)->siguiente = *lista;
      return;
    }
  nuevo = (struct listaCircular *) malloc (sizeof (struct listaCircular));
  anterior = (struct listaCircular *) malloc (sizeof (struct listaCircular));
  tmp = (struct listaCircular *) malloc (sizeof (struct listaCircular));
  if (nuevo == NULL || anterior == NULL || tmp == NULL)
    {
      return;
    }
  nuevo->dato = dato;
  tmp = *lista;
  anterior = *lista;
  while (anterior->siguiente != tmp)
    {
      anterior = anterior->siguiente;
    }
  anterior->siguiente = nuevo;
  nuevo->siguiente = tmp;
  return;
}

void
eliminar (struct listaCircular **lista, int dato)
{
  if (*lista == NULL)
    {
      return;
    }
  struct listaCircular *tmp = NULL;
  struct listaCircular *tmp1 = NULL;
  struct listaCircular *anterior = NULL;
  struct listaCircular *siguiente = NULL;
  struct listaCircular *act = NULL;
  tmp = (struct listaCircular *) malloc (sizeof (struct listaCircular));
  act = (struct listaCircular *) malloc (sizeof (struct listaCircular));
  tmp1 = (struct listaCircular *) malloc (sizeof (struct listaCircular));
  anterior = (struct listaCircular *) malloc (sizeof (struct listaCircular));
  siguiente = (struct listaCircular *) malloc (sizeof (struct listaCircular));
  int aux = 0;
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
  if (act == (*lista))
    {
      siguiente = act->siguiente;
      tmp1 = siguiente;
      (*lista) = tmp1;
      tmp = *lista;
      while (tmp->siguiente != tmp1)
	{
	  if (tmp->siguiente == act)
	    {
	      anterior = tmp;
	    }
	  tmp = tmp->siguiente;
	  if (tmp->siguiente == tmp1)
	    {
	      if (tmp->siguiente == act)
		{
		  anterior = tmp;
		}
	    }
	}
      anterior->siguiente = *lista;
      free (act);
      return;
    }
  tmp = *lista;
  while (tmp->siguiente != tmp1)
    {
      if (tmp->siguiente == act)
	{
	  anterior = tmp;
	}
      tmp = tmp->siguiente;
      if (tmp->siguiente == tmp1)
	{
	  if (tmp->siguiente == act)
	    {
	      anterior = tmp;
	    }
	}
    }
  siguiente = act->siguiente;
  anterior->siguiente = siguiente;
  free (act);
  return;
}

void
mostrar (struct listaCircular *lista)
{
  if (lista == NULL)
    {
      return;
    }
  struct listaCircular *tmp = NULL;
  struct listaCircular *tmp1 = NULL;
  tmp = (struct listaCircular *) malloc (sizeof (struct listaCircular));
  tmp1 = (struct listaCircular *) malloc (sizeof (struct listaCircular));
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
