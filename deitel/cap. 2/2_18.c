/* ex_2.18 deitel*/

/* Scrivete un programma che chieda all'utente di immettere due interi, ottenga i numeri e visualizzi
   quello maggiore seguito dalle parole "is larger". Nel caso che i numeri siano uguali, stampate il
   messaggio "these numbers are equal" Usate soltanto la forma a selezione singola della istruizione
   if che avete appreso in questo capitolo. */

#include <stdio.h>

int main ()
{

  int x, y;

  printf("inserisci due numeri: ");
  scanf("%d%d", &x, &y);

  if (x > y)
    printf("%d is larger\n", x);

  if (y > x)
    printf("%d is larger\n", y);

  if (y == x)
    printf("These numbers are equal\n");
  return 0;
}
