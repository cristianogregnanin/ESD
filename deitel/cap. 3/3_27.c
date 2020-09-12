/* ex_3.27 deitel*/

/* trovate i due numeri maggior tra 10 valori */


#include <stdio.h>

/*inizio del programma */
int main()
{

int counter, number, largest1, largest2;

largest1 = 1;
largest2 = 1;
counter = 2;

printf("inserisci un numero: ");
scanf("%d", &largest1);

while(counter <= 10){

  printf("inserisci un numero: ");
  scanf("%d", &number);

  if(number>largest1)
    if(largest1<largest2)
      largest1 = number;
    else
      largest2 = number;

    counter++;
}

printf("i due numeri maggiori sono %d e %d\n", largest1, largest2);

return 0;
} /*fine del programma*/
