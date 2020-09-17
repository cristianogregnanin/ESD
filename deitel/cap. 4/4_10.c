/* ex. 4.10 Deitel C how to program */
/* Scrivete un programma che calcoli e visualizzi la media di diversi interi. Supponete che
l'ultimo valore letto con la scanf sia quello della sentinella 9999. Una tipica sequenza di input
potrebbe essere:

10 8 11 7 9 9999

che indica che dovrà essere calcolata la media di tutti i valori che precedono 9999. */
#include <stdio.h>

/* l'esecuzione del programma inizia dalla funzione main */
int main(){

  int somma;
  float media;
  int numero;
  int i;

  i = 0;
  numero = 0;
  media = 0;
  somma = 0;

  /* sollecita l'utente a inserire i dati */
  printf("Inserisci un intero (9999 per finire): " );
  scanf("%d", &numero); /* legge i valori per numero */

  while(numero != 9999){

    somma += numero;

    i++;

    printf("Inserisci un intero (9999 per finire): " );
    scanf("%d", &numero); /* legge i valori per numero */

  } /* fine del comando for esterno */

media = (float) somma / i;
    printf("la media è: %.1f", media);

  return 0; /* indica che il programma è terminato con successo */
} /* fine della funzione di main */
