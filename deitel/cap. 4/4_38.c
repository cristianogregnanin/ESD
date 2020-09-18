/* ex. 4.37 Deitel C how to program */
/* Che cosa farà il seguente frammento di programma?

Cinque rettangoli di *
*/

#include <stdio.h>
/* l'esecuzione del programma inizia dalla funzione main */
int main(){

int i,j,k;

for (i=1; i <= 5; i++){
  for (j = 1; j <= 3; j++){
    for (k = 1; k <= 4; k++)
      printf("*");
    printf("\n");
  }
  printf("\n");
}

return 0; /* indica che il programma è terminato con successo */
} /* fine della funzione di main */
