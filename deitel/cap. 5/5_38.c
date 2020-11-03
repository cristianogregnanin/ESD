/* ex. 5.38 Deitel C how to program */
/* La serie di Fibonacci

  0, 1, 1, 2, 3, 5, 8, 13, 21, ...

incomincia con i termini 0 e 1 e gode della proprietà per la quale ogni termine successivo sarà pari alla
somma dei due termini precedenti. a) Scrivere una funzione fibonacci ( n ) non ricorsiva che calcola
il numero n-esimo di Fibonacci. b) Determinare il numero di Fibonacci più grande che possa essere visualizzato
sul vostro sistema. Modificate il programma della parte a) in modo da usare dei double, invece degli int,
per calcolare e restituire i numeri di Fibonacci. Lasciate reiterare il programma finchè non fallisca
a causa di un valore eccessivamente alto.
  */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

double fibonacci(double a);
double numero = 1.0;

while (numero != 0){

  printf("il numero %f di Fibonacci è %f\n", numero, fibonacci(numero));

  numero += 1.0;
}

  return 0;
}

double fibonacci (double a){

  double pre1 = 0.0;
  double pre2 = 1.0;
  double risultato;
  int i;

for (i=3; i<= a; i++){

  risultato = pre1 + pre2;

  pre1 = pre2;
  pre2 = risultato;
}

  return risultato;
}
