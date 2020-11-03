/* ex. 5.19 Deitel C how to program */
/* Scrivete una funzione che visualizzi al margine sinitro dello schermo un quadrato pieno di
asterischi il cui lato sia stato specificato nel paramentro intero side. Per esempio, qualora side fosse 4,
la funzione dovrebbe visualizzare:

****
****
****
****

*/

#include <stdio.h>
#include <math.h>

int main(){

int side (int x);

int lato;

printf("inseriscila lunghezza del lato: ");
scanf("%d", &lato);

side(lato);

  return 0;
}

int side (int x){

int i,j;

for (i=1; i<=x; i++){
  for(j=1; j<=x; j++)
    printf("*");
  printf("\n");
}
  return 0;
}
