/* ex. 7.03 Deitel C how to program */
/* Rispondete a ognuna delle seguenti domande. Supponete che i numeri in virgola mobile con
  precisione singola siano immagazzinati in 4 byte e che l'indirizzo di partenza per il vettore
  corrisponda alla locazione di memoria 10025500. Ogni parte dell'esercizio, laddove appropriato,
  dovrà utilizzare i risultati di quelle precedenti.*/

  /* a) Dichiarate il vettore  di tipo float chiamato numbers contenente 10 elementi e inizializzateli
        con i valori 0, 0, 1, 1, 2, 2, ... 9, 9. Supponete che la costante simbolica SIZE sia stata definita
        con il testo di sostituzione 10. */

    #include <stdio.h>
    #define SIZE 10

    int main(){

      float numbers[SIZE] = {0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};
      int i; // variabile di controllo

  /* b) dichiarate un puntatore nPtr che faccia riferimento a un oggetto di tipo float. */

      float *nPtr;

  /* c) Visualizzate gli elementi del vettore numbers utilizzando la notazione con gli indici di
        vettore. Utilizzate un comando for e supponete che la variabile di controllo intera i sia già
        stata dichiarata. Visualizzate ogni numero con 1 posizione di precisione a destra della virgola decimale. */

      for(i=0; i<SIZE; i++){
        printf("%.1f\n", numbers[i]);
      }

  /* d) Fornite due istruzioni distinte che assegnino alla variabile di tipo puntatore nPtr l'indirizzo di
        partenza del vettore numbers. */

      //  nPtr = numbers;  è un altro modo per assegnare un puntatore
          nPtr = &numbers[0];

  /* e) Visualizzate gli elementi del vettore numbers utilizzando la notazione con puntatore e offset
        usando nPtr come puntatore. */

        for(i=0; i<SIZE; i++){
          printf("%.1f\n", *(nPtr + i) );
        }
  /* f) Visualizzate gli elementi del vettore numbers utilizzando la notazione con puntatore e offset
        usando il nome del vettore come puntatore. */

        for(i=0; i<SIZE; i++){
          printf("%.1f\n", *(numbers + i) );
        }

  /* g) Visualizzate gli elementi del vettore numbers utilizzando gli indici applicati al puntatore
        nPtr. */

        for(i=0; i<SIZE; i++){
          printf("%.1f\n", nPtr[i] );
        }

  /* h) Puntate all'elemnto 4 del vettore numbers, utilizzando la notazione con gli indici di vettore,
        quella con puntatore e offset usando il nome del vettore come puntatore, quella con gli indici
        applicati al puntatore nPtr, e la notazione con puntatore e offset usando nPtr.

        numbers[4];
        *(numbers + 4);
        nptr[4];
        *(nPtr + 4);

        */

  /* i) Supponendo che nPtr faccia riferimento a numbers[5], quale indirizzo sarebbe puntato da nPtr == 4?
        Quale sarebbe il valore immagazzinato in quella locazione di memoria?

        10025500 + 8 * 4 = 1002532 il valore è 8.8 */

  /* j) Supponendo che nPtr faccia riferimento a numbers[5], quale indirizzo sarebbe puntato
        da nPtr -=4? Quale sarebbe il valore immagazzinato in quella locazione di memoria?

        10025500 + 5 * 4 = 1002520
        102520 - 4 * 4 = 1002504 il valore è 1.1 */



      return 0;
    }
