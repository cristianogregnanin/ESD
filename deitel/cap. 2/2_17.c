/* ex_2.17 deitel*/

/* Scrivere un programma che visualizzi i numeri da 1 a 4 sulla stessa riga.
   Scrivete il programma utilizzando i seguenti metodi:
      a) Usando una istruzione printf senza specifiche di conversione
      b) Usando una istruizione printf con quattro specifiche di conversione
      c) Usando quattro istruzionii printf */

#include <stdio.h>

int main ()
{

  printf("1 2 3 4\n");
  printf("%d%d%d%d\n", 1, 2, 3, 4);
  printf("1\n");
  printf("2\n");
  printf("3\n");
  printf("4\n");

  return 0;
}
