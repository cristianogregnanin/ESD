/* ex. 5.43 Deitel C how to program */
/* Può il main essere chiamato in modo ricorsivo? Scrivete un programma che contenga una
funzione main. Includete la variabile locale static count inizializzata a 1. Ogni volta che la funzione
main è invocata, applicate l'operatore di postincremento e visualizzate il valore di count. Eseguite il
programma. Che cosa succede?
  */

#include <stdio.h>

// l'esecuzione del programma inizia dalla funzione main

int main(){

  static int count = 1;

  printf("%d\n", count );
  count ++;

  main();

  return 0;
} // fine
