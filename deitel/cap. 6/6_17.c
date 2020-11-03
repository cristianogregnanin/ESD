/* ex. 6.17 Deitel C how to program */
/* Che cosa farà il seguente programma? - la somma degli elementi di a
*/

#include <stdio.h>
#define SIZE 10

// prototipo di funzione
int whatIsThis( const int b[], int p);

int main(){

  int a[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int x;

  x = whatIsThis(a, SIZE);

  printf("Result is %d\n", x );

  return 0;
}

int whatIsThis ( const int b[], int size){

  if (size == 1) {
    return b[0];
  } // fine del ramo if
  else{ // passo ricorsivo
    return b[ size - 1] + whatIsThis(b, size - 1);
  } // fine del ramo else

} // fine della funzione whatIsThis
