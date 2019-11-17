#include"listaCircular.h"
int
main (void)
{
  struct listaCircular *lista = NULL;
  agregar (&lista, 5);
  agregar (&lista, 6);
  agregar (&lista, 7);
  agregar (&lista, 8);
  agregar (&lista, 9);
  agregar (&lista, 10);
  agregar (&lista, 11);
  mostrar (lista);
  printf ("\n");
  eliminar (&lista, 8);
  eliminar (&lista, 5);
  eliminar (&lista, 6);
  mostrar (lista);
  return 0;
}
