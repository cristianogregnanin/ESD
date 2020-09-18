/* ex. 4.23 Deitel C how to program */
/* Modificate il programma della figura 4.6 in modo che utilizzi soltanto degli interi
per calcolare l'interesse composto. [suggerimento: trattate tutte le cifre monetarie
come quantità intere di centesimi. In seguito, "separate" il risultato nelle sue porzioni di
dollari e centesimi, utilizzando rispettivamente le operazioni di divisione e modulo.
Ineserite un punto.]*/

#include <stdio.h>
#include <math.h>
/* l'esecuzione del programma inizia dalla funzione main */
int main(){

  int amount; /* ammontare del deposito in centesimi */
  int centesimi;
  int dollari;
  int principal = 100000; /* capitale iniziale in centesimi */
  double rate = 0.05; /* tasso di  interesse annuo */
  int year; /* contatore degli anni */

  /* visualizza le intestazioni delle colonne della tabella */
  printf("%4s%21s\n", "Year", "Amount on deposit");

  /* calcola l'ammontare del deposito per ognuno dei dieci anni */
  for (year = 1; year <= 10; year++){

    /* calcola il nuovo ammontare per l'anno specificato */
    amount = principal * pow(1.0 + rate, year);

    /* visualizza una riga della tabella */
    printf("%4d%21d\n",year, amount);

    centesimi = amount % 100;

    dollari = amount / 100;

    printf("la porzione di dollari dell'ammontare è %d\n", dollari );
    printf("la porzione di centesimi dell'ammontare è %d\n", centesimi );
  } /* fine del comando for */

  return 0; /* indica che il programma è terminato con successo */
} /* fine della funzione di main */
