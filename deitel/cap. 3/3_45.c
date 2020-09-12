/* ex_3.45 deitel*/

/* Scrivete un programma che legga in input tre interi diversi da zero e, quindi, determini e
visualizzi se possono essere i lati di un triangolo rettangolo */

#include <stdio.h>


int main()
{

float cateto1, cateto2, ipotenusa;

cateto1 = 2;
cateto2 = 2;
ipotenusa = 8;

if (ipotenusa*ipotenusa == cateto1*cateto1 + cateto2*cateto2)
  printf("il triangolo è rettangolo");
else
  printf("il triangolo non è rettangolo");

   return 0;
}
