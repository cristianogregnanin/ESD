/* ex. 5.25 Deitel C how to program */
/* Scrivete  una funzione che restituisca il minore di tre numeri in virgola mobile. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int minore (int a, int b, int c);

int num1, num2, num3;

printf("inserisci tre numeri: ");
scanf("%d%d%d", &num1, &num2, &num3);

printf("il minore è: %d", minore(num1, num2, num3));

  return 0;
}

int minore (int a, int b, int c){

  if (a < b && a < c)
    return a;
  else if (b < a && b < c)
    return b;
  else
    return c;
}
