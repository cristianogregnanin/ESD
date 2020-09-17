/* ex. 4.15 Deitel C how to program */
/* Modificare il programma dell'interesse composto della Sezione 4.6 in modo che ripeta i suoi
passi per tassi d'interesse del 5, 6, 7, 8, 9 e 10 per cento. Utilizzate un ciclo for per variare
il tasso di interesse. */

#include <stdio.h>
#include <math.h>
/* l'esecuzione del programma inizia dalla funzione main */
int main(){

  double amount; /* ammontare del deposito */
  double principal = 1000.0; /* capitale iniziale */
  int rate; /* tasso di  interesse annuo */
  int year; /* contatore degli anni */

for (rate = 5; rate <= 10; rate++){

  printf( "Interest Rate: %f\n", rate / 100.0 );
  printf("%4s%21s\n", "Year", "Amount on deposit");

  /* calcola l'ammontare del deposito per ognuno dei dieci anni */

  for (year = 1; year <= 10; year++){

    /* calcola il nuovo ammontare per l'anno specificato */
    amount = principal * pow(1.0 + rate/100.0, year);

    /* visualizza una riga della tabella */
    printf("%4d%21.2f\n",year, amount);
  } /* fine del comando for */
}/* fine secondo ciclo for */

  return 0; /* indica che il programma è terminato con successo */
} /* fine della funzione di main */


/* non si può calcolare il fattoriale di 20 perché è un numero troppo grande */
