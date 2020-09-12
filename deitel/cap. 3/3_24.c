/* ex_3.24 deitel*/

/* Scrivete un programma che prenda in input una serie di 10 numeri e in seguito
   determini e visualizzi il maggiore di quelli. */

#include <stdio.h>

/*inizio del programma */
int main()
{

int counter, number, largest;

largest = 1;
counter = 2;

printf("inserisci un numero: ");
scanf("%d", &largest);

while(counter <= 10){

  printf("inserisci un numero: ");
  scanf("%d", &number);

  if(number>largest)
    largest = number;

    counter++;
}

printf("il numero maggiore è %d\n", largest);

return 0;
} /*fine del programma*/
