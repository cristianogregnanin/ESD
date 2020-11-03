/* ex. 5.30 Deitel C how to program */
/* Scrivete una funzione qualityPoints che prenda in input la media di uno studente e
restituisca 4 qualora la sua media sia compresa tra 90 e 100, 3 tra 80 e 90, 2 tra 70 e 79, 1 tra
60 e 69 e 0 qualora sia inferiore a 60. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int qualityPoints (int a);

int media;

printf("inserisci la media dello studente: ");
scanf("%d", &media );

printf("il fattore di qualità dello studente è: %d", qualityPoints(media));

  return 0;
}

int qualityPoints (int a){

  int qualita = 0;

if (a >= 90 && a <= 100)
  qualita = 4;
else if (a >= 80 && a <= 89)
  qualita = 3;
else if (a >= 70 && a <= 79)
  qualita = 2;
else if (a >= 60 && a <= 69)
  qualita = 1;
else
  qualita = 0;

return qualita;
}
