#include"listaLigada.h"
int
main (void)
{
  struct listaLigada *lista = NULL;
  agregar (&lista, 5);
  agregar (&lista, 3);
  agregar (&lista, 6);
  agregar (&lista, 77);
  agregar (&lista, 66);
  agregar (&lista, 44);
  mostrar (lista);
  eliminar (&lista, 77);
  printf ("\n");
  mostrar (lista);
  agregar (&lista, -1);
  eliminar (&lista, 3);
  agregar (&lista, 0);
  printf ("\n");
  mostrar (lista);
  return 0;
}
