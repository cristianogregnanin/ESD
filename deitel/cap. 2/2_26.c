/* ex_2.26 deitel*/

/* Scrivere un programma che legga due interi e determini e visuaizzi se il primo
   sia un multiplo del secondo */

#include <stdio.h>

/* inizio del programma */

int main()
{
int a, b;

printf("inserisci due numeri: ");
scanf("%d%d",a ,b);

if (a%b == 0)
  printf("%d è un multiplo di %d", a, b);

if (a%b != 0)
  printf("%d non è un multiplo di %d", a, b);

return 0;
} /*fine della funzione main */
