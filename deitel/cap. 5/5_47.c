/* ex. 5.47 Deitel C how to program */
/* Cosa farà il seguente programma? -- esegue la moltiplicazione
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

  //caso base
  if (b == 1){
    return a;
  } else {
    return a + mystery (a, b - 1);
  }
}
