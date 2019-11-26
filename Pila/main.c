#include"pila.h"
int
main (void)
{
  struct pila *pila = NULL;
  push (&pila, 0);
  push (&pila, 1);
  push (&pila, 2);
  push (&pila, 3);
  push (&pila, 4);
  push (&pila, 5);
  mostrar (pila);
  pop (&pila);
  printf ("\n");
  mostrar (pila);
  printf ("\n");
  return 0;
}
