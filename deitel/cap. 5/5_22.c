/* ex. 5.22 Deitel C how to program */
/* Scrivete dei segmenti di programma che eseguano ognuno dei seguenti compiti:

a) Calcolate la parte intera del quoziente ottenuto dalla divisione degli interi a e b.
b) Calcolate il resto intero ottenuto dalla divisione degli interi a e b.
c) Utilizzate i pezzi di programma sviluppati in a) e b) per scrivere una funzione che prenda in
   input un intero, compreso tra 1 e 32767, e lo visualizzi come una sequenza di cifre,
   separando ogni coppia di esse con due spazi. Per esempio, l'intero 4562 dovrà essere stampato
   come: 4  5  6  2
*/

#include <stdio.h>
#include <math.h>

int main(){

int quoziente (int x, int y);
int resto (int x, int y);
int divisore = 10000;

int num;

printf("inserisci un numero tra 1 e 32767: ");
scanf("%d", &num);

while (num >= 10){
  if (num >= divisore){
    printf("%d ", quoziente(num, divisore));

    num = resto(num, divisore);

    divisore = quoziente(divisore, 10);
  } else {
    divisore = quoziente(divisore, 10);
  }
}

printf("%d", num);

  return 0;
}

int quoziente(int x, int y){

  int quoziente = x/y;

  return quoziente;
}

int resto (int x, int y){

  int resto = x % y;

  return resto;
}
