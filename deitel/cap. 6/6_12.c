/* ex. 6.12 Deitel C how to program */
/* Scrivete delle istruzioni singole che eseguano ognuna delle seguenti operazion su vettori
unidimensionali:
  a) Azzerate i 10 elementi del vettore counts
  b) Aggiungete 1 a ognuno dei 15 elementi contenuti nel vettore di interi bonus.
  c) Leggete dalla tastiera i 12 valori in virgola mobile del vettore monthlyTemperatures
  d) Visualizzate in colonna i 5 valori contenuti nel vettore di interi bestScore.
*/

#include <stdio.h>

int main(){

  int i; // contatore
  float t; // varibile da tastiera

  int counts[10] = {0};
  int bonus [15];
  float monthlyTemperatures [12];
  int bestScore [5];

  for (i=0; i<=14; i++)
    bonus[i] = 1;

  for (i=0; i<=11; i++){

  printf("scrivi un valore in virgola mobile: ");
  scanf("%f", &t );

  monthlyTemperatures[i] = t;
}

for(i=0; i<=4; i++)
  printf("%d\n", bestScore[i]);


  return 0;
}
