/* ex_2.16 deitel*/

/* Scrivere un programma che chieda all'utente di immettere due numeri,
   ottenga i numeri dall'utente e visualizzi la loro somma, prodotto, differenza,
   quoziente e resto */

#include <stdio.h>

int main ()
{

  int a, b;

  printf("immetti due numeri: ");
  scanf("%d%d", &a, &b);

  printf("la somma è %d\n", a + b);
  printf("il prodotto è %d\n", a * b);
  printf("la differenza è %d\n", a - b);
  printf("il quoziente è %d\n", a / b);
  printf("il resto è %d\n", a % b);

  return 0;
}
