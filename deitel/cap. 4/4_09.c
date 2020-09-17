/* ex. 4.09 Deitel C how to program */
/* Scrivete un programma che sommi una sequenza di interi. Supponete che il primo intero letto
con la scanf specifichi il numero dei valori che dovranno essere immessi. Il vostro programma dovrà
leggere solo un valore per ogni volta che la scanf sarà eseguita. Una tipica sequenza di input potrebbe essere

5 100 200 300 400 500

dove 5 indica che dovranno essere sommati i cinque valori successivi */
#include <stdio.h>
/* l'esecuzione del programma inizia dalla funzione main */
int main(){

  int somma;
  int counter;
  int numero;
  int i;

  numero = 0;
  somma = 0;
  counter = 0;

  /* sollecita l'utente a inserire i dati */
  printf("Inserisci il numero di interi da sommare: " );
  scanf("%d", &counter); /* legge i valori per counter */

  for (i = 1; i <= counter; i++){/* conta da 1 a counter */

    printf("Inserisci un numero da sommare: " );
    scanf("%d", &numero); /* legge i valori per numero */

    somma += numero;

  } /* fine del comando for esterno */

    printf("la somma è: %d", somma);

  return 0; /* indica che il programma è terminato con successo */
} /* fine della funzione di main */
