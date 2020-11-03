/* ex. 6.15 Deitel C how to program */
/* Utilizzate un vettore unidimensionale per risolvere il seguente problema. leggete in input 20
numeri, ognuno dei quali sarà compreso tra 10 e 100, estremi inclusi. Ogni volta che leggete un
numero, visualizzatelo qualora non sia un duplicato di uno già letto. Preparatevi al "caso perggiore"
in cui tutti i 20 numeri siano differenti. Utilizzate il vettore più piccolo possibile per risolvere
quewsto problema.
*/

#include <stdio.h>
#define SIZE 20

int main(){

  int vettore[SIZE] = {0};
  int j = 0;
  int a;
  int b = 0;
  int i;
  int numero;

  printf("inserisci 20 numeri compresi tra 10 e 100\n");

  for(a = 0; a < SIZE; a++){

  scanf("%d", &numero);

  for(i=0; i < SIZE; i++){
    if (numero == vettore[i])
      j++;
  }

  if (!j)
    vettore[b++] = numero;

  j = 0;
}

printf("i numeri senza doppioni sono:\n");

  for(i=0; i<SIZE && vettore[i] != 0; i++){
    printf("%d\t", vettore[i] );
  }

  return 0;
}
