#include"listaCircularDoble.h"
int
main (void)
{
  struct listaCircularDoble *lista = NULL;
  agregar (&lista, 6);
  agregar (&lista, 1);
  agregar (&lista, 12);
  agregar (&lista, 8);
  agregar (&lista, 11);
  agregar (&lista, 9);
  agregar (&lista, 10);
  mostrar (lista);
  eliminar (&lista, 6);
  eliminar (&lista, 8);
  eliminar (&lista, 10);
  printf ("\n");
  mostrar (lista);
  printf ("\n");
  return 0;
}
