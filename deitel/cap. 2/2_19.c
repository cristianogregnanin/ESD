/* ex_2.19 deitel*/

/* Scrivete un programma che prenda in input dalla tastiera tre diversi interi e quindi visualizzi la
   somma, la media, il prodotto, il minore e il maggiore di questi numeri. Usate soltanto la forma a
   selezione singola della istruzione if che avete appreso in questo capitolo*/

#include <stdio.h>

int main ()
{

  int x, y, z;

  printf("Input three different integers: ");
  scanf("%d%d%d", &x, &y, &z);

  printf("Sum is %d\n", x + y + z);

  printf("Product is %d\n", x * y * z);

  if (x > y)
    if (x > z)
      printf("Largest is %d\n", x);

  if (y > x)
    if (y > z)
      printf("Largest is %d\n", y);

  if (z > x)
    if (z > y)
      printf("Largest is %d\n", z);

  if (x < y)
    if (x < z)
      printf("Smallest is %d\n", x);

  if (y < x)
    if (y < z)
      printf("Smallest is %d\n", y);

  if (z < x)
    if (z < y)
      printf("Smallest is %d\n", z);


}
