/* ex. 5.09 Deitel C how to program */
/* Un garage addebita un importo minimo di $ 2.00 per un parcheggio fino a tre ore. Il garage
   addebita un' addizionale di $ 0.50 per ogni ora o frazione di essa che ecceda le tre di base.
   L'addebito massimo per ogni dato periodo di 24 ore è $ 10.00. Assumete che nessuna auto parcheggi
   per più di 24 ore per volta. Scrivete un programma che calcoli e visualizzi gli addebiti per ognuno
   dei tre clienti che hanno parcheggiato le proprie auto in questo garage ieri. Dovrete immettere le
   ore di parcheggio per ogni cliente. Il vostro programma dovrà visualizzare i risultati in un formato
   tabulare ordinato e dovrà calcolare e visualizzare il totale delle ricevute di ieri. Il programma dovrà
   utilizzare la funzione calculateCharges per determinare l'addebito di ogni cliente. */

#include <stdio.h>
#include <math.h>

int main(){

  float calculateCharges (float y);

  float ore1, ore2, ore3;

  printf("Inserisci il numero di ore delle tre macchine: ");
  scanf("%f%f%f", &ore1, &ore2, &ore3 );

  printf("Car\tHours\tCharge\n\n");
  printf("1\t%.1f\t%.1f\n", ore1, calculateCharges(ore1));
  printf("2\t%.1f\t%.1f\n", ore2, calculateCharges(ore2));
  printf("3\t%.1f\t%.1f\n", ore3, calculateCharges(ore3));
  printf("TOTAL\t%.1f\t%.1f\n", ore1 + ore2 + ore3, calculateCharges(ore2) +
          calculateCharges(ore3) + calculateCharges(ore1));

  return 0;
}

float calculateCharges (float y){

  float charges, ore, parziale;

  if (y <= 3.0)
    charges = 2.00;
  else{
    ore = y - 3.0;
    parziale = ore * 0.5;
    charges = parziale + 2.00;
  }

  if (charges > 10.0)
    charges = 10.0;

  return charges;

}
