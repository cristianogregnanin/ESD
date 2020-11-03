/* ex. 5.37 Deitel C how to program */
/* Scrivere una funzione power (base, exponent) che quando invocata restituisca

base(exponent)

Per esempio, power (3, 4) = 3 * 3 * 3 * 3. Supponete che exponent sia un intero maggiore o uguale a 1.
Suggerimento: il passo di ricorsione dovrà utilizzare la relazione
  base(exponent) = base - base(exponet - 1)

e la condizione di terminazione sarà verificata quando exponent sarà uguale a 1 perchè

  base1 = base
  */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int power(int a, int b);

printf("%d", power(3, 4));

  return 0;
}

int power (int a, int b){

  int potenza = 1;

  while (b >= 1){
    potenza *= a;

    b--;
  }

  return potenza;
}
