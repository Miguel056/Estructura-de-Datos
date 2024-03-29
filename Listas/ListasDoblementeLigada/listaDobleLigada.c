#include"listaDobleLigada.h"
void
agregar (struct listaLigadaDoble **lista, int dato)
{
  struct listaLigadaDoble *nuevo;
  struct listaLigadaDoble *anterior;
  if (*lista == NULL)
    {
      nuevo =
	(struct listaLigadaDoble *) malloc (sizeof (struct listaLigadaDoble));
      if (nuevo == NULL)
	{
	  return;
	}
      nuevo->dato = dato;
      *lista = nuevo;
      (*lista)->siguiente = NULL;
      (*lista)->anterior = NULL;
      return;
    }
  nuevo =
    (struct listaLigadaDoble *) malloc (sizeof (struct listaLigadaDoble));
  if (nuevo == NULL)
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
  nuevo->anterior = anterior;
  return;
}

void
mostrar (struct listaLigadaDoble *lista)
{
  if (lista == NULL)
    {
      return;
    }
  struct listaLigadaDoble *tmp = NULL;
  tmp = lista;
  while (tmp != NULL)
    {
      printf ("%d, ", tmp->dato);
      tmp = tmp->siguiente;
    }
}

void
eliminar (struct listaLigadaDoble **lista, int dato)
{
  struct listaLigadaDoble *tmp;
  struct listaLigadaDoble *act;
  struct listaLigadaDoble *anterior;
  struct listaLigadaDoble *siguiente;
  int aux = 0;
  if (*lista == NULL)
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
  if (act == *lista)
    {
      siguiente = act->siguiente;
      siguiente->anterior = NULL;
      (*lista) = siguiente;
      free (act);
      return;
    }
  tmp = *lista;
  anterior = act->anterior;
  siguiente = act->siguiente;
  anterior->siguiente = siguiente;
  siguiente->anterior = anterior;
  free (act);
  return;
}
