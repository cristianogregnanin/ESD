/* ex. 5.21 Deitel C how to program */
/* Utilizzate delle tecniche simili a quelle sviluppate negli Esercizi 5.19 e 5.20,
per produrre un programma che tracci un'ampia gamma di forme.

*/

#include <stdio.h>
#include <math.h>

int main(){

int side (int x, char c);

int lato;
char c;

printf("inserisci il carattere: ");
scanf("%c", &c);

printf("inseriscila lunghezza del lato: ");
scanf("%d", &lato);

side(lato, c);

  return 0;
}

int side (int x, char c){

int i,j;

for (i=1; i<=x; i++){
  for(j=1; j<=x; j++)
    printf("%c", c);
  printf("\n");
}
  return 0;
}
