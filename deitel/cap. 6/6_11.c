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
    int pass; // contatore dei passaggi
    int i; // contatore dei confronti
    int hold; // locazione temporanea per scambiare due elementi del vettore
    int passaggi = 9;
    int f = 0; // check

    printf("Data items in orginal order\n");

    // visualizza il vettore originale

    for (i = 0; i < SIZE; i++){
      printf("%4d", a[i] );
    } // fine del comando for

    // ordinamento a bolle
    // ciclo per controllare il numero di passaggi
    for (pass = 1; pass < SIZE; pass++){
      // ciclo per controllare il numero di confronti per ogni passaggio
      for (i = 0; i < passaggi; i++){

        // confronta gli elementi adiacenti e li scambia se il primo elemento è maggiore del secondo
        if (a[i] > a[i + 1]){
          f = 1;
          hold = a[i];
          a[i] = a[i + 1];
          a[i+1] = hold;
        } // fine del comando if
      } // fine del comando for interno
      --passaggi;

      if (!f)
        break;
    } // fine del comando for esterno

    printf("\nData items in ascending order\n");

    // visualizza il vettore ordinato
    for (i = 0; i < SIZE; i++){
      printf("%4d", a[i] );
    } // fine del comando for

    printf("\n");

  return 0;
}
