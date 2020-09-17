/* ex. 4.12 Deitel C how to program */
/* Scrivete un programma che calcoli e visualizzi la somma degli interi pari da 2 a 30. */

#include <stdio.h>
/* l'esecuzione del programma inizia dalla funzione main */
int main(){

  int somma, i;

  somma = 0;

  for(i = 2; i<=30; i += 2){
    somma += i;
  }

  printf("la somma dei numeri interi pari da 2 a 30 è: %d", somma);

  return 0; /* indica che il programma è terminato con successo */
} /* fine della funzione di main */
