/* ex. 5.20 Deitel C how to program */
/* Modificate la funzione creata nell'Esercizio 5.19 in modo da formare il quadrato con qualsiasi
carattere sia contenuto nel parametro di tipo carattere fillCharacter. Di conseguenza, qualora side
fosse 5 e fillCharacter fosse "#", la funzione dovrebbe visualizzare:

#####
#####
#####
#####

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
