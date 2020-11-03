/* ex. 6.11 Deitel C how to program */
/* L'ordinamento a bolle presentato nella Figura 6.15 è inefficente per vettori di grandi dimensioni.
Apportate le seguenti semplici modifiche in modo da migliorare l'efficienza dell'ordinamento a bolle.

  a) Dopo il primo passaggio, il numero più grande sarà stato sicuramente sistemato nell'elemento
     con l'indice più alto del vettore; dopo il secondo passaggio, i due numeri più grandi saranno
     "a posto" e così via. Invece di eseguire nove confronti a ogni passaggio, sette nel terzo e
     così via.
  b) I dati nel vettore potrebbero già essere nell'ordine appropriato o in uno vicino a questo. perciò
     perchè eseguire nove passaggi quando ne potrebbero bastare meno? Modificate l'ordinamento a bolle,
     in modo da verificare se alla fine di ogni passaggio siano stati eseguiti degli scambi. Nel caso che
     non ne siano stati eseguiti, allora i datit saranno già nell'ordine appropriato, perciò il programma
     dovrà terminare la propria esecuzione. Nel caso invece che siano stati eseguiti degli scambi, sarà
     necessario almeno un altro passaggio.
*/

#include <stdio.h>
#define SIZE 10

// esecuzione del programma inizia dalla funzione int main(int argc, char const *argv[]) {
  int main()
  {

    int a[ SIZE ] = {2, 6, 4, 8, 10, 89, 68, 45, 37};
  //  int pass; // contatore di passaggi
    int hold; // variabile di appoggio
    int i, j;

    for (i=0; i< SIZE; i++){
      printf("%d\t", a[i]);
    }

    printf("\n");

    for (i = 0; i < SIZE; i++){

      for(j = 0; j < SIZE - 1; j++){
        if (a[j] > a[j+1]){
          hold = a[j];
          a[j] = a [j+1];
          a[j+1] = hold;
        }
      }
    }

    for (i=0; i< SIZE; i++){
      printf("%d\t", a[i]);
    }


  return 0;
}
