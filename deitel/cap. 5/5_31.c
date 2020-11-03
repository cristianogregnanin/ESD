/* ex. 5.31 Deitel C how to program */
/* Scrivete un programma che simuli il lancio di una monetina. Per ogni lancio della monetina il
programma dovrà visualizzare Heads o Tails. Lasciare che il programma lanci la monetina per 100
volte e contate il numero di occorrenze per la comparsa di ogni faccia della monetina. Visualizzate
i risultati. Il programma dovrà chiamare una funzione distinta flip, che non riceverà argomenti e che
restituirà 0 per croce e 1 per testa. [nota: qualora il programma simuli realisticamente il lancio di una
monetina, allora ogni faccia della stessa dovrà apparire approssimativamente la metà delle volte, per un
totale approssimativo di 50 teste e 50 croci.] */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

srand(time(NULL));

int flip (void);

int occorrenza1 = 0, occorrenza2 = 0, risultato = 0;
int i;

for (i = 1; i <= 100; i++){

  risultato = flip();

  if (risultato == 0)
    ++occorrenza1;
  else
    ++occorrenza2;
}

printf("testa = %d\ncroce = %d", occorrenza1, occorrenza2);



  return 0;
}

int flip (void){

  int i = rand() % 2;
  int risultato;

if (i == 0)
  risultato = 0;
if (i == 1)
  risultato = 1;

return risultato;

}
