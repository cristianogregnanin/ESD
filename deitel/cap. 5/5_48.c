/* ex. 5.48 Deitel C how to program */
/* Dopo che avrete determinato cosa farà il programma dell'Esercizio 5.47, modificatelo in modificatelo in modo
che funzioni correttamente, dopo la rimozione della restrizione riguardante la positività del secondo parametro
  */

#include <stdio.h>

int mystery (int a, int b); // prototipo di funzione

// l'esecuzione del programma inizia dalla funzione main

int main(){

  int x; // primo intero
  int y; // secondo intero

  printf("Enter two integers: ");
  scanf("%d%d", &x, &y );

  printf("The result is %d\n", mystery(x, y) );

  return 0;
} // fine

int mystery (int a, int b){

  if (b<0){
    a *= -1;
    b *= -1;
  }

  //caso base
  if (b == 1){
    return a;
  } else {
    return a + mystery (a, b - 1);
  }
}
