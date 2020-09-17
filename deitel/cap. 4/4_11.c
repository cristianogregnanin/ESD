/* ex. 4.11 Deitel C how to program */
/* Scrivete un programma che trovi il minore di diversi interi. Supponete che il primo valore letto
specifichi il numero di quelli da leggere. */

#include <stdio.h>
/* l'esecuzione del programma inizia dalla funzione main */
int main(){

  int i, counter, minore, numero;

  i = 0;
  counter = 0;
  minore = 0;
  numero = 0;

printf("inserisci il numero degli interi da valutare: ");
scanf("%d", &counter);

printf("inserisci un numero: ");
scanf("%d", &minore);

for(i = 1; i < counter; i++){

  printf("inserisci un numero: ");
  scanf("%d", &numero);

  if(numero < minore)
    minore = numero;

}

  printf("il numero minore è: %d", minore);

  return 0; /* indica che il programma è terminato con successo */
} /* fine della funzione di main */
