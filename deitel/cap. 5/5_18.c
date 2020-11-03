/* ex. 5.18 Deitel C how to program */
/* Scrivete una programma che prenda in input una serie di interi e li passi, uno per volta, alla funzione even,
che utilizzerà l'operazione modulo per determinare se un intero è pari. La funzione
dovrà ricevere un argomento intero e restituire 1 qualora l'intero sia pari e 0, in caso contrario.
*/

#include <stdio.h>
#include <math.h>

int main(){

int even (int x);

int num1, i;

for (i=1; i<=3; i++){

printf("inserisci un numero intero: ");
scanf("%d", &num1);

if (even(num1))
  printf("%d è un numero pari\n", num1);
else
  printf("%d è un numero dispari\n", num1);
}

  return 0;
}

int even (int x){

  int pari;

  pari = !(x % 2);

  return pari;

}
