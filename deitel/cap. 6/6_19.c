/* ex. 6.19 Deitel C how to program */
/* Scrivete un programma che simuli il lancio di due dadi. Il programma dovrà utilizzare rand
per lanciare il primo dado e invocarla nuovamente per lanciare il secondo dado. Dovrà quindi essere
calcolata la somma dei due valori. [Nota: poichè ogni dado può mostrare un valore intero compreso tra
1 e 6, la somma dei due valori potrà variare tra 2 e 12, con 7 come somma più frequente e 2 e 12 come
somme meno frequentii.] La figura 6.23 mostra le 36 possibili combinazioni dei due dadi. il vostro
programma dovrà lanciare i due dadi 36.000 volte. Utilizzate un vettore unidimensionale per sommare il
numero di occorrenze di ogni somma possibile. Visualizzate i risultati in un formato tabulare. Determinate
anche se i totali sono sensati: ci sono sei modi per ottenere un 7, perciò circa un sesto dei lanci dovrebbe
ottenerlo.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 12

// prototipo di funzione
int dado(void);

int main(){

  int i;
  int x;
  int occorrenze[13] = {0};

  srand(time(NULL));

for(i=0; i<36000; i++){

  x = dado();
  occorrenze[x] += 1;
}

for(i=2; i<=SIZE; i++){
  printf("%d = %d\n", i, occorrenze[i]);
}

  return 0;
}

int dado(void){
  int x, y;

  x = (rand() % 6) + 1;
  y = (rand() % 6) + 1;
  return x + y;
}
