/* ex. 4.13 Deitel C how to program */
/* Scrivete un programma che calcoli e visualizzi il prodotto degli interi dispari da 1 a 15. */

#include <stdio.h>
/* l'esecuzione del programma inizia dalla funzione main */
int main(){

  int prodotto, i;

  prodotto = 1;

  for(i = 1; i<=15; i += 2){
    prodotto *= i;
  }

  printf("il prodotto dei numeri interi dispari da 1 a 15 è: %d", prodotto);

  return 0; /* indica che il programma è terminato con successo */
} /* fine della funzione di main */
