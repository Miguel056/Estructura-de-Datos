#include"contigua.h"
void
insertar (struct contigua **lista, int dato)
{
  int *tmp = NULL;
  int i = 0;
  if (*lista == NULL)
    {
      *lista = (struct contigua *) malloc (sizeof (struct contigua));
      if (*lista == NULL)
	{
	  return;
	}
      (*lista)->datos = (int *) malloc (sizeof (int) * 8);
      if ((*lista)->datos == NULL)
	{
	  free (*lista);
	  return;
	}
      (*lista)->cuantos = dato;
      return;
    }
  if ((*lista)->cuantos == (*lista)->actual + 1)
    {
      tmp = (int *) malloc (sizeof (int) * (*lista)->cuantos * 2);
      if (tmp == NULL)
	{
	  return;
	}
      for (i = 0; i < (*lista)->cuantos; i++)
	{
	  *(tmp + i) = *((*lista)->datos + i);
	}
      free ((*lista)->datos);
      (*lista)->datos = tmp;
      (*lista)->cuantos = (*lista)->cuantos * 2;
    }
  (*lista)->actual = (*lista)->actual + 1;
  *((*lista)->datos + (*lista)->actual) = dato;
}

void
eliminar (struct contigua **lista, int dato)
{
  int i = 0;
  int *tmp = NULL;
  if ((*lista) == NULL)
    {
      return;
    }
  if ((*lista)->datos == NULL)
    {
      return;
    }
  for (i = 0; i <= (*lista)->actual; i++)
    {
      if (*((*lista)->datos + 1) == dato)
	{
	  (*lista)->actual--;
	  break;
	}
    }
  for (i = 0; i <= (*lista)->actual; i++)
    {
      *((*lista)->datos + i) = *((*lista)->datos + i + 1);
    }
  if ((*lista)->actual < (*lista)->cuantos / 2)
    {
      tmp = (int *) malloc (sizeof (int) * (*lista)->cuantos / 2);
      if (tmp == NULL)
	{
	  return;
	}
      for (i = 0; i <= (*lista)->actual; i++)
	{
	  *(tmp + i) = *((*lista)->datos + i);
	}
      free ((*lista)->datos);
      (*lista)->datos = tmp;
      (*lista)->cuantos = (*lista)->cuantos / 2;
    }
}

void
mostrar (struct contigua *lista)
{
  int i = 0;
  if (lista == NULL)
    {
      return;
    }
  for (i = 0; i < lista->actual; i++)
    {
      printf ("%d ", *(lista->datos + i));
    }
}
