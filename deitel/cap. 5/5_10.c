/* ex. 5.10 Deitel C how to program */
/* Un'applicazione della funzione floor è l'arrotondamento di un valore all'interno più vicino.
L'istruzione

y = floor(x + .5);

arrotonderà il numero più vicino e assegnerà il risultato a y. Scrivete un programma che
legga diversi numeri e utilizzi l'istruzione precedente per arrotondare ognuno di questi numeri
all'intero più vicino. Per ogni numero elaborato, visualizzate quello originale e quello arrotondato.*/

#include <stdio.h>
#include <math.h>

int main(){

  float arrotondaPerDifetto(void);

  arrotondaPerDifetto();

  return 0;
}

  float arrotondaPerDifetto (void){

  float x, y;
  int i; /* contatore */

for (i = 1; i <= 5; i++){

  printf("Inserisci un numero: ");
  scanf("%f", &x);

  y = floor(x + .5);

  printf("il numero %.1f è stato arrotondato a %.1f\n", x, y);

  }

  return 0;
}
