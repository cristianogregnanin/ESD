/* ex. 5.41 Deitel C how to program */
/* (Visualizzare la ricorsione) E' interessante osservare la ricorsione "in azione". Modificate la
funzione del fattoriale della Figura 5.14 in modo da visualizzare le sue variabili locali e i paramentri
delle chiamate ricorsive. Per ogni chiamata ricorsiva, visualizzate gli output su ogni riga separata e aggiungete
un livello di rientro. Fate del vostro meglio per rendere l'output chiaro, interessante e significativo.
Il vostro obiettivo in questo caso sarà di disegnare e implementare un formato dell'output che aiuti una
persona a capire meglio la ricorsione. Potreste voler aggiungere queste capacità di visualizzazione ai molti
altri esempi ed esercizi sulla ricorsione presenti in questo testo.
  */

#include <stdio.h>

int factorial (int number); // prototipo di funzione

// l'esecuzione del programma inizia dalla funzione main

int main(){

  int i; // contatore

  /* itera 11 volte; a ogni iterazione calcola
     factorial( i ) e visualizza il risultato */
  for ( i=0; i <= 10; i++){
    printf("%2d! = %1d\n", i, factorial(i) );
  } // fine del comando for

  return 0;
} // fine

int factorial(int number){
  // caso base
  if (number <= 1){
    return 1;
  } // fine del ramo if
  else {
    printf("%d\n",number );
    return (number * factorial(number - 1));
  }
}
