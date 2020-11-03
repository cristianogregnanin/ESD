/* ex. 5.16 Deitel C how to program */
/* Scrivete una funzione integerpower (base, exponent) che restituisca il valore di base

Per esempio, integerPower (3, 4) = 3 * 3 * 3 * 3. Supponente che exponent sia un intero
positivo diverso da zero e che base sia un intero. La funzione integerPower dovrà utilizzare
for per controllare il calcolo. Non utilizzate nessuna funzione della libreria matematica.

*/

#include <stdio.h>
#include <math.h>

int main(){

int integerPower (int x, int y);

int base, esponente;

printf("inserisci il valore della base e dell'esponente: ");
scanf("%d%d", &base, &esponente);

printf("il risultato di %d elevato a %d è %d",base, esponente, integerPower(base, esponente));


  return 0;
}

int integerPower (int x, int y){

  int i, potenza;

  potenza = 1;

  for (i = 1; i <= y; i++){

    potenza *= x;
  }

  return potenza;

}
