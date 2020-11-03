/* ex. 5.17 Deitel C how to program */
/* Scrivete una funzione multiple che per una coppia di interi determini se il secondo sia un
multiplo del primo. La funzione dovrà ricevere due argomenti interi e restituire 1 (vero), qualora il
secondo sia un multiplo del primo, 0 (falso), in caso contrario. Utilizzate questa funzione in un programma
che prenda in input una serie di coppie di interi.
*/

#include <stdio.h>
#include <math.h>

int main(){

int multiple (int x, int y);

int num1, num2;

printf("inserisci i due numeri: ");
scanf("%d%d", &num1, &num2);

if (multiple(num1, num2))
  printf("%d è multiplo di %d", num2, num1);
else
  printf("%d non è multiplo di %d", num2, num1);

  return 0;
}

int multiple (int x, int y){

  int multiplo;

  multiplo = !(y % x);

  return multiplo;

}
