/* ex_2.23 deitel*/

/* Scrivete un programma che legga cinque interi e quindi determini e visualizzi quelli che,
   all'interno del gruppo, sono ilmaggiore e il minore.*/

#include <stdio.h>

/* inizio del programma */

int main()
{

int a, b, c, d, e;

printf("scrivi 5 numeri: ");
scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

/* maggiore */

if (a>b && a>c && a>d && a>e)
  printf("il maggiore è %d\n", a);

if (b>a && b>c && b>d && b>e)
  printf("il maggiore è %d\n", b);

if (c>a && c>b && c>d && c>e)
  printf("il maggiore è %d\n", c);

if (d>a && d>b && d>c && d>e)
  printf("il maggiore è %d\n", d);

if (e>a && e>b && e>c && e>d)
  printf("il maggiore è %d\n", e);

/* minore */

if (a<b && a<c && a<d && a<e)
  printf("il minore è %d\n", a);

if (b<a && b<c && b<d && b<e)
  printf("il minore è %d\n", b);

if (c<a && c<b && c<d && c<e)
  printf("il minore è %d\n", c);

if (d<a && d<b && d<c && d<e)
  printf("il minore è %d\n", d);

if (e<a && e<b && e<c && e<d)
  printf("il minore è %d\n", e);

return 0;
} /*fine della funzione main */
