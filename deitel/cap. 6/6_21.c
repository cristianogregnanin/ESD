/* ex. 6.19 Deitel C how to program */
/* (Sistema di prenotazione per linee aeree) Una piccola compagnia aerea ha appena comprato un
computer per il suo nuovo sistema di prenotazione automatica. Il presidente vi ha chiesto di
programmare il nuovo sistema. Voi dovete scrivere un programma che assegni i posti su ogni volo
dell'unico aereo dell'aereolinea (capacità: 10 posti).
  Il vostro programma dovrà visualizzare il seguente menù di scelte:
    please type 1 for "first class"
    please type 2 for "economy"

Nel caso che il cliente digiti 1, allora il vostro programma dovrà assegnare un posto nella sezione prima
classe (quelli da 1 a 5). Nel caso che il cliente digiti 2, allora il vostro programma dovrà assegnare un
posto nella sezione economica (quelli da 6 a 10). Il vostro programma dovrà quindi stampare una carta di imbarco,
che dovrà indicare il numero di posto assegnato al passeggero e se quello si trova nella sezione prima classe o
economuca dell'areoplano.
  Utilizzate un vettore unidimensionale per rappresentare la mappa dei posti sull'aereo. Azzerate tutti gli
elementi del vettore in modo da indicare che tutti i posti sono vuoti. Man mano che i posti saranno stati assegnati,
imposterete a 1 l'elemento corrispondente del vettore in modo da indicare che il posto non è più disponibile.
  Naturalmente, il vostro programma non dovrà mai assegnare un posto che sia già stato assegnato.
Quando la sezione prima classe sarà piena, il vostro programma dovrà chiedere al cliente se sia disposto
ad accettare una sistemazione nella sezione economica (e viceversa). Eseguite l'appropriata assegnazione di posto,
qualora la sua risposta sia affermativa. Visualizzate il messaggio "Next flight leaves in 3 hours" (il prossimo
volo decollerà fra 3 ore"), qualora la sua risposta sia negativa.
*/

#include <stdio.h>
#define SIZE 10

int main () {

int mappa[10] = {0};
int i; // contatore domande
int scelta; // scelta
int k = 0; //posti first class
int j = 5; // posti economy

for(i = 0; i< SIZE; i++){

  printf("please type 1 for first class\n"
         "please type 2 for economy\n");
  scanf("%d", &scelta);

  if(scelta == 1 && k != 5){
    mappa[k] = 1;
    printf("il posto assegnato è il %d\n\n", k+1);
    k++;
  } else if (scelta == 2 && j != 10){
    mappa[j] += 1;
    printf("il posto assegnato è il %d\n\n", j+1);
    j++;
  } else if (scelta == 1 && k == 5){
    printf("la prima classe è piena, vuole un posto in economy? 1 for yes and 2 for no: ");
    scanf("%d", &scelta);
      if (scelta == 1 && j!= 9){
        mappa[j] += 1;
        printf("il posto assegnato è il %d\n\n", j+1);
        j++;
      } else {
        printf("Next flight leaves in 3 hours\n");
      }
  } else if (scelta == 2 && j == 10){
    printf("l'economy è piena, vuole un posto in first class? 1 for yes and 2 for no: ");
    scanf("%d", &scelta);
      if (scelta == 1 && k!= 5){
        mappa[k] += 1;
        printf("il posto assegnato è il %d\n\n", k+1);
        k++;
      } else {
        printf("Next flight leaves in 3 hours\n");
      }
    }
  }

  printf("tutti i posti sono pieni\n");

  return 0;
}
