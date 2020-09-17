/* ex. 4.14 Deitel C how to program */
/* La funzione fattoriale è utilizzata frequentemente nei problemi di probabilità. Il fattoriale di
un intero positivo n, scritto n! e pronunciato "fattoriale di n", è uguale al prodotto degli interi positivi
da 1 a n. Scrivete un programma che valuti i fattoriali degli interi da 1 a 5. Visualizzate i risultati in un
formato tabulare. Quale difficoltà potrà impedirvi di calcolare il fattoriale di 20? */

#include <stdio.h>
/* l'esecuzione del programma inizia dalla funzione main */
int main(){

  int fattoriale, i;

  fattoriale = 1;

  for(i = 1; i<=5; i ++){
    fattoriale *= i;
  }

  printf("il fattoriale di 5 è: %d", fattoriale);

  return 0; /* indica che il programma è terminato con successo */
} /* fine della funzione di main */


/* non si può calcolare il fattoriale di 20 perché è un numero troppo grande */
