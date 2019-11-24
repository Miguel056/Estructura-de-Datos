#include"cola.h"
int
main (void)
{
  struct cola *cola = NULL;
  agregar (&cola, 6);
  agregar (&cola, 7);
  agregar (&cola, 8);
  agregar (&cola, 9);
  agregar (&cola, 10);
  mostrar (cola);
  eliminar (&cola);
  eliminar (&cola);
  printf ("\n");
  mostrar (cola);
  printf ("\n");
  return 0;
}
