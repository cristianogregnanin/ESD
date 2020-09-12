/* ex_2.24 deitel*/

/* Scrivete un programma che legga un intero e determini e visualizzi se sia pari o dispari*/

#include <stdio.h>

/* inizio del programma */

int main()
{

int a;

printf("scrivi 1 numero: ");
scanf("%d", &a);

if (a % 2 == 0)
  printf("il numero è pari");

if (a % 2 != 0)
  printf("il numero è dispari");

return 0;
} /*fine della funzione main */
