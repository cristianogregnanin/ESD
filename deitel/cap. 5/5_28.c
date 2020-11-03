/* ex. 5.27 Deitel C how to program */
/* Scrivete una funzione che prenda un valore intero e lo restituisca dopo avere invertito le sue
cifre. Per esempio, dato il numero 7631, la funzione dovrà restituire 1367.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int inversione (int a);
int numero;

printf("inserisci un numero intero di quattro cifre");
scanf("%d", &numero);

inversione(numero);

  return 0;
}

int inversione (int a){

int i, j, x;

i = a/1000; /* prima cifra */
a %= 1000;

j = a/100;
a %= 100;

x = a/10;
a %= 10;

printf("%d%d%d%d\n", a, x, j, i);

return 0;
}
