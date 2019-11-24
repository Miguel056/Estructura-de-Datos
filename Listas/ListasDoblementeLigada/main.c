#include"listaDobleLigada.h"
int
main (void)
{
  struct listaLigadaDoble *lista = NULL;
  agregar (&lista, 6);
  agregar (&lista, 7);
  agregar (&lista, 8);
  agregar (&lista, 9);
  agregar (&lista, 10);
  agregar (&lista, 11);
  mostrar (lista);
  eliminar (&lista, 6);
  eliminar (&lista, 8);
  printf ("\n");
  mostrar (lista);
  printf ("\n");
  return 0;
}
