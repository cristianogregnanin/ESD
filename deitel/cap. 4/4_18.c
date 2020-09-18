/* ex. 4.18 Deitel C how to program */
/* Una interessante applicazione dei computer è il disegno di diagrammi e di grafici a barre (detti
a volte "istogrammi"). Scrivete un programma che legga cinque numeri (ognuno compreso tra 1 e 30).
Per ogni numero letto, il vostro programma dovrà visualizzare una riga contenente quel numero di
asterischi adiacenti. per esempio, se il vostro programma leggesse il numero sette, dovrà visualizzare
*******.  */

#include <stdio.h>
/* l'esecuzione del programma inizia dalla funzione main */
int main(){

int numero;
int i,j;

for (i=1; i<=5; i++){
  printf("inserisci un numero: ");
  scanf("%d", &numero);

  for(j=1; j<=numero; j++){
    printf("*");
  }
  printf("\n");
}

  return 0; /* indica che il programma è terminato con successo */
} /* fine della funzione di main */
