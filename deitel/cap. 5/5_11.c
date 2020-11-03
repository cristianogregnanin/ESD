/* ex. 5.11 Deitel C how to program */
/* La funzione floor può essere utilizzata per arrotondare un numero a una specifica posizione
decimale. L'istruzione

y = floor (x * 10 + .5)/10;

arrotonda x alla posizione dei decimi (la prima a destra della virgola dei decimale). L'istruzione

y = floor (x * 100 + .5)/100;

arrotonda x alla posizione dei centesimi (la seconda a destra della virgola dei decimali). Scrivete un
programma che definisca quattro funzioni per arrotondare un numero x in vari modi

a) roundToInteger(number)
b) roundToTenths (number)
c) roundToHundreths (number)
d) roundToThousandths (number)

Per ogni valore letto, il vostro programma dovrà visualizzare il numero originale e quelli arrotondati
all'intero, al decimo, al centesimo e al millesimo più vicini.*/

#include <stdio.h>
#include <math.h>

int main(){

  float roundToInteger (float x);
  float roundToTenths (float x);
  float roundToHundreths (float x);
  float roundToThousandths (float x);

  int quantita, i;
  float numero;

  printf("Quanti numeri vuoi processare?: ");
  scanf("%d", &quantita);

  for(i = 1; i<=quantita; i++){

    printf("Inserisci il numero da processare?: \n");
    scanf("%f", &numero);

    printf("%f arrotondato all'intero più vicino è: %f\n", numero, roundToInteger(numero));

    printf("%f arrotondato al decimo più vicino è: %f\n", numero, roundToTenths(numero));

    printf("%f arrotondato al centesimo più vicino è: %f\n", numero, roundToHundreths(numero));

    printf("%f arrotondato al millesimo più vicino è: %f\n", numero, roundToThousandths(numero));
  }

  return 0;
}

float roundToInteger (float x){

  float risultato = floor(x + .5);

  return risultato;
}

float roundToTenths (float x){

  float risultato = floor(x * 10 + .5)/10;

  return risultato;
}

float roundToHundreths (float x){

  float risultato = floor(x * 100 + .5)/100;

  return risultato;
}

float roundToThousandths (float x){

  float risultato = floor(x * 1000 + .5)/1000;

  return risultato;
}
