/* ex_3.37 deitel*/

/* Scrivete un programma con un ciclo while che conti da 1 a 3.000.000 ogni volta
che il conto raggiungerà un multiplo di 1.000.000 visualizzare il numero sullo schermo */

#include <stdio.h>

/*inizio del programma */
int main()
{

int i = 1;

while (i <= 3000000){
  if (i%1000000 == 0)
    printf("%d\n",i);
    i++;
}

return 0;
} /*fine del programma*/
