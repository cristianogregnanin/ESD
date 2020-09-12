/* ex_3.41 deitel*/

/* Scrivete un programma che continui a visualizzare i multipli dell'intero 2, ovverosia 2, 4, 8, 16,
32, 64, ecc. Il vostro ciclo non dovrà mai terminare */

#include <stdio.h>

/*inizio del programma */
int main()
{

int i = 2;

printf("%d\n", i);

while (i >= 2){

  i *= 2;
  printf("%d\n", i );
}

return 0;
} /*fine del programma*/
