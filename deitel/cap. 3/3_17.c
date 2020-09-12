/* ex_3.17 deitel*/

/* Gli automobilisti sono interessati al numero di chilometri percorsi delle proprie automobili.
   Un automobilista ha mantenuto traccia di diversi pieni di benzina, registrando i chilometri percorsi
   e i litri utilizzati per ogni pieno. Sviluppate un programma che prenda in input i chilometri
   percorsi e i litri utilizzati per ogni pieno. Il programma dovrà calcolare e visualizzare i
   chilometri per litro ottenuti da ogni pieno. Dopo aver elaborato tutte le informazioni in input, il
   programma dovrà calcolare e visualizzare anche i chilometri per litro ottenuti complessivamente
   da tutti i pieni. */

#include <stdio.h>

int main()
{

  float litri, tot_litri;
  int chilometri, tot_chilometri;

  tot_litri = 0.0;

  tot_chilometri = 0;

  printf("Inserisci i litri usati (-1 per finire): ");
  scanf("%f", &litri);

  while (litri != -1){

    printf("Inserisci i chilometri percorsi: ");
    scanf("%d", &chilometri);

    printf("chilometri/litro per questo viaggio %.3f\n", chilometri / litri);

    tot_litri += litri;
    tot_chilometri += chilometri;

    printf("Inserisci i litri usati (-1 per finire): ");
    scanf("%f", &litri);
  }

  printf("chilometri/litro totali %.3f\n", (float) tot_chilometri/tot_litri);

  return 0;
}
