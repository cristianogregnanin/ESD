/* ex. 4.21 Deitel C how to program */
/* Riscrivere il programma della figura 4.2 in modo che l'inizializzazione della variabile
counter sia eseguita nella dichiarazione, invece che nel comando for.*/

#include <stdio.h>
/* l'esecuzione del programma inizia dalla funzione main */
int main(){

  int counter = 1;

  for ( ; counter <= 10; counter++){
    printf("%d\n", counter);
  }/* fine del comando for */


  return 0; /* indica che il programma è terminato con successo */
} /* fine della funzione di main */
