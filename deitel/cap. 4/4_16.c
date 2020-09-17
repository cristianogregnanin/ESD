/* ex. 4.16 Deitel C how to program */
/* Scrivete un programma che visualizzi separatamente l'uno sotto l'altro i seguenti disegni.
Utilizzate dei cicli for per generare i disegni. Tutti gli asterischi (*) dovranno essere stampati da una
singola istruzione printf della forma printf("*"); (ciò causerà la visualizzazione fianco a fianco
degli asterischi). Suggerimento: gli ultimi due disegni richiederanno che ogni riga incominci con
un numero appropriato di spazi. */

#include <stdio.h>
#include <math.h>
/* l'esecuzione del programma inizia dalla funzione main */
int main(){

int i; /* contatore */
int j;
int z;

for (i=1; i<=10; i++){
  for (j=1; j<=i; j++){
    printf("*");
  }
  printf("\n");
}

printf("\n"); /* disegno 2 */

for (i=10; i>=1; i--){
  for (j=1; j<=i; j++){
    printf("*");
  }
  printf("\n");
}

printf("\n"); /* disegno 3 */

for (i=10; i>=1; i--){

  for(z = 0; z+i <= 10; z++ ){
    printf(" ");
  }

  for (j=1; j<=i; j++){
    printf("*");
  }

  printf("\n");
}

printf("\n"); /* disegno 4 */

for (i=1; i<=10; i++){

  for(z = 0; z+i <= 10; z++ ){
    printf(" ");
  }

  for (j=1; j<=i; j++){
    printf("*");
  }

  printf("\n");
}

  return 0; /* indica che il programma è terminato con successo */
} /* fine della funzione di main */


/* non si può calcolare il fattoriale di 20 perché è un numero troppo grande */
