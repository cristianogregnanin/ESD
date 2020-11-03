/* ex. 6.18 Deitel C how to program */
/* Che cosa farà il seguente programma? - la somma degli elementi di a - incerte l'ordine degli elementi
*/

#include <stdio.h>
#define SIZE 10

// prototipo di funzione
void someFunction( const int b[], int startIndex, int size);

int main(){

  int a[SIZE] = {8, 3, 1, 2, 6, 0, 9, 7, 4, 5};

  printf("Answer is:\n");
  someFunction(a, 0, SIZE);
  printf("\n");

  return 0;
}

void someFunction( const int b[], int startIndex, int size){

  if (startIndex < size) {
    someFunction(b, startIndex + 1, size);
    printf("%d ", b[startIndex] );
  } // fine del ramo if

} // fine della funzione whatIsThis
