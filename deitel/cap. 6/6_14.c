/* ex. 6.14 Deitel C how to program */
/* Modificate il programma della Figura 6.16, in modo che la funzione mode sia in grado di gestire un
pareggio per il valore della moda. Modificate anche la funzione median, in modo che sia calcolata la media dei
due elementi di mezzo, in un vettore che contenga un numero pari di elementi.
*/

#include <stdio.h>
#define SIZE 99

// prototipi di funzione
void mean(const int answer[]);
void median(int answer[]);
void mode(int freq[], const int answer[]);
void bubbleSort (int a[]);
void printArray(const int a[]);

// l'esecuzione del programma inizia dalla funzione int main
int main(){

  int frequency[10] = {0}; // inizializza il vettore frequency

  // inizializza il vettore responce
  int response[ SIZE ] =
                  {6, 7, 8, 9, 8, 7, 8, 9, 8, 9,
                   7, 8, 9, 5, 9, 8, 7, 8, 7, 8,
                   6, 7, 8, 9, 3, 9, 8, 7, 8, 7,
                   7, 8, 9, 8, 9, 8, 9, 7, 8, 9,
                   6, 7, 8, 7, 8, 7, 9, 8, 9, 2,
                   7, 8, 9, 8, 9, 8, 9, 7, 5, 3,
                   5, 6, 7, 2, 5, 3, 9, 4, 6, 4,
                   7, 8, 9, 6, 8, 7, 8, 9, 7, 8,
                   7, 4, 4, 2, 5, 3, 8, 7, 5, 6,
                   4, 5, 6, 1, 6, 5, 7, 8, 7};

  // elabora le risposte
  mean( response );
  median (response);
  mode (frequency, response);

  return 0; // indica che il programma è terminato con successo
} // fine della funzione main

// calcola la media dei valori di tutte le risposte
void mean (const int answer[]){
  int j; // contatore per caloclare il totale degli elementi
  int total = 0; // variabile per memorizzare la somma degli elementi

  printf("%s\n%s\n%s\n", "********", " Mean", "********" );

  // calcola il totale dei valori delle risposte
  for (j=0; j<SIZE; j++){
    total += answer[j];
  } // fine del comando for

  printf("The mean is the average value of the data\n"
         "items. The mean is equal to the total of\n"
         "all the data items divided by the number\n"
         "of data items (%d). The mean value for\n"
         "this run is: %d / %d = %.4f\n\n",
            SIZE, total, SIZE, (double)total / SIZE);
} // fine della funzione mean

// ordina il vettore e determina il valore dell'elemento mediano
void median (int answer[]){
  printf("\n%s\n%s\n%s\n%s",
         "********", " Median", "********",
         "The unsorted array of responses is");

  printArray( answer ); // visualizza il vettore non ordinato

  bubbleSort( answer ); // ordina il vettore

  printf("\n\nThe sorted array is");
  printArray( answer ); // visualizza il vettore ordinato

  if(SIZE % 2 != 0){

  // visualizza l'elemento mediano
  printf("\n\nThe median is element %d of\n"
         "the sorted %d element array.\n"
         "For this run the median is %d\n\n",
         SIZE / 2, SIZE, answer[ SIZE / 2]);
       } else if (SIZE % 2 == 0){
         printf("\n\nThe median are element %d and %d of\n"
                "the sorted %d element array.\n"
                "For this run the median is %.1f\n\n",
                SIZE / 2,(SIZE / 2) + 1, SIZE, (float)(answer[ (SIZE / 2)-1]+answer[(SIZE/2)])/2);
       }
} // fine della funzione median

//determina la risposta più frequente
void mode(int freq[], const int answer[]){
  int rating; // contatore per accedere gli elementi 1-9 del vettore freq
  int j; // contatore per riassumere gli elementi 0-98 del vettore answer
  int h; // contatore per visualizzare gli istogrammi degli elementi del vettore freq
  int largest = 0; // rappresenta la frequenza massima
  int modeValue = 0;
  int modeValue2 = 0; // rappresenta la risposta più frequente
  int count = 0; // contatore occorrenze Valore 2

  printf("\n%s\n%s\n%s\n",
        "********", " Mode", "********" );

  // azzera le frequenze
  for (rating = 1; rating <= 9; rating++){
    freq[rating] = 0;
  } // fine del comando for

  // riassume le frequenze
  for (j=0; j < SIZE; j++){
    ++freq[answer[j]];
  } // fine del comando for

  // visualizza le intestazioni per le colonne dei risultati
  printf("%s%11s%19s\n\n%54s\n%54s\n\n",
         "Response", "Frequency", "Histogram",
         "1   1   2   2", "5    0   5   0   5" );

  // visualizza i risultati
  for (rating = 1; rating <= 9; rating++){
    printf("%8d%11d       ", rating, freq[rating] );

    // tiene traccia del valore della moda e del valore massimo
    // della frequenza
    if (freq[ rating ]>largest){
      largest = freq[ rating ];
      modeValue = rating;
    } else if (freq[rating]==largest && modeValue != largest){
      modeValue2 = rating;
      count++;
    } //fine del comando if

    //visualizza la barra dell'istogramma che rappresenta
    // il valore della frequenza
    for(h=1; h <= freq[rating]; h++){
      printf("*");
    } // fine del comando for interno

    printf("\n"); // inizia una nuova linea di output
  } //fine del comando for esterno

  // visualizza il valore della moda
  if (count == 1){
  printf("The mode is the most frequent value.\n"
         "For this run the mode are %d which occurred"
         " %d times and %d which occured %d times\n", modeValue, largest, modeValue2, largest);
       } else {
         printf("The mode is the most frequent value.\n"
                "For this run the mode is %d which occurred"
                " %d times.\n", modeValue, largest);
       }
} // fine della funzione mode

// funzione che ordina un vettore per mezzo dell'algoritmo buble sort
void bubbleSort(int a[]){

  int pass; // contatore dei passaggi
  int j; // contatore dei confornti
  int hold; // locazione temporanea per scambiare gli elementi

  // ciclo per controllare il numero dei passaggi
  for (pass = 1; pass < SIZE; pass++){

    // ciclo per cpntrollare il numero dei confronti
    for (j=0; j < SIZE - 1; j++){

      // scambia gli elementi se non sono in ordine
      if (a[j] > a[j+1]){
        hold = a[j];
        a[j] = a[j+1];
        a[j+1] = hold;
      } // fine del comando if
    } // fine del comando for interno
  } // fine del comando for esterno
} // fine del comando bubbleSort

// viswualizza i contenuti del vettore (20 valori per riga)
void printArray (const int a[]){
  int j; // contatore

  // visualizza i contenuti del vettore
  for (j=0; j<SIZE; j++){

    if (j%20 == 0){ // inizia una nuova linea ogni 20 valori
    printf("\n");
  } //fine del comando if

    printf("%2d", a[j] );
  } // fine del comando for
}// fine della funzione printArray
