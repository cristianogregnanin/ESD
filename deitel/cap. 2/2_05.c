/* ex_2.5 deitel*/

#include <stdio.h>

int main()
{
  int x, y, z, result;

  printf("scrivi i tre interi: ");
  scanf("%d%d%d", &x, &y, &z);

  result = x * y * z;

  printf("il prodotto è: %d\n", result);

  return 0;
}
