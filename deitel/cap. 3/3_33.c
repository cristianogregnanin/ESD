/* ex_3.33 deitel*/

/* scrivete un programma che legga in input il lato di un quadrato e quindi lo disegni utilizzando
degli asterischi. Il vostro programma dovrà funzionare con tutti i quadrati con dimensioni dei lati
comprese tra 1 e 20. */

#include <stdio.h>

/*inizio del programma */
int main()
{

  int lato = 1;
  int i = 1;
  int j = 1;

printf("inserisci la dimensione del lato (tra 1 e 20): ");
scanf("%d", &lato);

while (i <= lato) {
  while (j <= lato){
    printf("*");
    j++;
  }
  j = 1;
  printf("\n");
  i++;
}

return 0;
} /*fine del programma*/
