/* ex. 5.42 Deitel C how to program */
/* Il massimo comun divisore degli interi x e y è l'intero più grande che divida esattamente sia x che y.
Scrivete una funzione ricorsiva gcd che restituisca il massimo comun divisore di x e y. Il gcd di x e y
sarà definito in modo ricorsivo come segue: se y è uguale a 0, allora gcd(x, y) sarà x;
altrimenti gcd(x,y) sarà gcd(y, x % y) dove % sarà l'operatore resto.
  */

#include <stdio.h>

int gdc (int x, int y); // prototipo di funzione

// l'esecuzione del programma inizia dalla funzione main

int main(){

  printf("%d\n", gdc(4, 8));

  return 0;
} // fine

int gdc(int x, int y){
  // caso base
  if (y == 0){
    return x;
  } // fine del ramo if
  else {
    return gdc(y, x % y);
  }
}
