/* ex. 5.32 Deitel C how to program */
/* I computer giocano un ruolo sempre più importante nell'educazione. Scrivete un programma
che aiuti uno studente di scuola elementare ad apprendere la moltiplicazione. Utilizzate rand pre
produrre due interi positivi di una cifra. Dovrete quindi visualizzare una domanda come:

  How much is 6 times 7?

  In seguito lo studente digiterà la risposta. Il vostro programma controllerà la risposta dello studente.
  Qualora sia corretta, visualizzate "Very good!" e sottoponete quindi un'altra domanda sulla moltiplicazione.
  Nel caso che la risposta sia sbagliata, visualizzate "No. Please try again." e lasciate quindi
  che lo studente provi ancora ripetutamente la stessa domanda, finchè alla fine non avrà risposto
  correttamente.
  */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

srand(time(NULL));
int moltiplicazione (void);

while (moltiplicazione() != 2){
  ;
}

  return 0;
}

int moltiplicazione (void){

  int a = rand() % 9;
  int b = rand() % 9;
  int c;

  printf("How much is %d times %d?: ",a, b);
  scanf("%d", &c);

  while (c != (a*b)){

    printf("No. Please try again: ");
    scanf("%d", &c);
  }

  printf("very good\n");

  return 0;

}
